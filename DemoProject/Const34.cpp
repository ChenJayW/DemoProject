#include <iostream>
#include <string>


/*
	3. ������ʹ�� const
*/
class A34 {
private:
	int m_X, m_Y;
public:
	/*
		�ں������� const������������������޸�ʵ���еĳ�Ա
	*/
	int getX() const {
		// m_X = 2;
		return 3;
	}
};

/*
	����������� const ���õĺ���Ҳ������ const
*/
void printA34(const A34& a34) {
	std::cout << a34.getX() << std::endl;
}


int main34() {

	/*
		1.���α������ɳ���
	*/
	const int a = 2;
	const int JAY_S = 90;

	/*
		����ִ���
			a = 3;
	*/
	std::cout << a << std::endl;


	/*
		2.����ָ��
			const int*, ֻ��
			int const*, ֻ��
				���Ըı�ָ�������, ���޷��ı�ʵ�ʵ�����
			int* const
				���Ըı�ʵ�ʵ�����, ���޷��ı�ָ�������
			const int* const
				�����ܸı�

	*/
	int* const b = new int;
	*b = 3;
	//b = &JAY_S;
	std::cout << *b << std::endl;

	const int* c = new int;
	//*c = 3;
	c = &JAY_S;
	std::cout << *c << std::endl;

	A34 a34;
	printA34(a34);

	std::cin.get();
	return 34;
}