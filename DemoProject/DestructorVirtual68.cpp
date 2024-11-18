

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
			��������������Ϊ��ϵ������ʱ�������ڶ�̬ʱҲ���Ե���������������������
				�ڴ�й¶
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
	std::cout << "��̬" << std::endl;

	Base* bds = new Derived();
	/*
		��ʹ�ö�̬ʱ���������û������������ʱ����ֻ����ø������������
	*/
	delete bds;

	return 68;
}