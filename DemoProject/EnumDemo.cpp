#include <iostream>


/*
	从 A 开始往后是自增
	可以指定对应的值,B = 2
	
	可以改变枚举的类型,在:后指定类型,必须是整型有关，如 byte
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