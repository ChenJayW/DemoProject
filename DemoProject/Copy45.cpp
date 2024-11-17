#include <iostream>
#include <string>


class String45 {
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String45(const char* string) {
		m_Size = strlen(string);
		//L_1
		/*
			m_Buffer = new char[m_Size];
			memcpy(m_Buffer, string, m_Size);
		*/

		//L_2 , ��Ҫ������ֹ��
		m_Buffer = new char[m_Size + 1];

		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}

	/*
		��Ϊ������ת�����ù��캯��
			����������ı�Ҫ����
	*/
	String45(const String45& other) :
		m_Size(other.m_Size) {
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	/*
		�ͷ��ڴ�ʱ��Ҫע��ʹ�õ�����
			ǳ�������ܻ����ɾ��ͬһƬ�ڴ��������ֹ
	*/
	~String45() {
		delete[] m_Buffer;
	}

	char& operator[](const int index) {
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& osm, const String45& str);
};

std::ostream& operator<<(std::ostream& osm, const String45& str) {
	osm << str.m_Buffer;
	return osm;
}

int main45() {

	String45 str = "jays";
	String45 str2 = str;

	str2[3] = 'd';

	std::cout << str << std::endl;
	std::cout << str2 << std::endl;


	std::cin.get();
	return 45;
}