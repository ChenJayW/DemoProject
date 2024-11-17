#include <iostream>
#include <string>


/*
	3. 在类中使用 const
*/
class A34 {
private:
	int m_X, m_Y;
public:
	/*
		在函数后定义 const，代表这个函数不会修改实例中的成员
	*/
	int getX() const {
		// m_X = 2;
		return 3;
	}
};

/*
	引用中如果有 const 调用的函数也必须有 const
*/
void printA34(const A34& a34) {
	std::cout << a34.getX() << std::endl;
}


int main34() {

	/*
		1.修饰变量，成常量
	*/
	const int a = 2;
	const int JAY_S = 90;

	/*
		会出现错误
			a = 3;
	*/
	std::cout << a << std::endl;


	/*
		2.修饰指针
			const int*, 只读
			int const*, 只读
				可以改变指针的引用, 但无法改变实际的内容
			int* const
				可以改变实际的内容, 但无法改变指针的引用
			const int* const
				都不能改变

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