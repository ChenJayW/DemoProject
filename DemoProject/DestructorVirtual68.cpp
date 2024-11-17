

#include <iostream>


namespace jay68 {

	/*

	*/

	class Base {
	public:
		Base() {
			std::cout << "Base create" << std::endl;
		}

		/*
			当析构造器修饰为虚系构造器时，可以在多态时也可以调用子类析构造器，避免
				内存泄露
		*/
		virtual ~Base() {
			std::cout << "Des Base" << std::endl;
		}
	};

	class Derived :public Base {
	public:
		Derived() {
			testdata = new int[50];
			std::cout << "create Derived" << std::endl;
		}

		~Derived() {
			delete[] testdata;
			std::cout << "Des Derived" << std::endl;
		}
	private:
		int* testdata;
	};
}



int main68() {

	using namespace jay68;

	Base* base = new Base;
	delete base;
	std::cout << "------------------" << std::endl;
	Derived* ds = new Derived;
	delete ds;

	std::cout << "------------------" << std::endl;
	std::cout << "多态" << std::endl;

	Base* bds = new Derived();
	/*
		当使用多态时，如果父类没有虚析构造器时，则只会调用父类的析构造器
	*/
	delete bds;

	return 68;
}