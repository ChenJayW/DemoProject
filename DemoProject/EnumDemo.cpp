#include <iostream>


/*
	�� A ��ʼ����������
	����ָ����Ӧ��ֵ,B = 2
	
	���Ըı�ö�ٵ�����,��:��ָ������,�����������йأ��� byte
	enum Example : unsigned char
	{
		A, B, C
	};

*/
enum Example : unsigned char
{
	A, B, C
};


int main24() {

	Example value = B;

	if (value == 1)
	{
		std::cout << value << std::endl;
	}

	std::cin.get();

	return 0;
}