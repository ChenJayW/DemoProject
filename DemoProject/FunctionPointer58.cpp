
#include <iostream>
#include <vector>

void testFun() {
	std::cout << "test fun1" << std::endl;
}

/*
	ʾ��2
*/
void printFor(const int value) {
	std::cout << "value:" << value << std::endl;
}

void forEachs(const std::vector<int>& values, void(*fun)(int)) {
	for (int value : values)
	{
		fun(value);
	}
}

int main58() {

	/*
		����ָ��
	*/

	auto testFun1 = testFun;
	testFun1();


	void(*testfun2)() = testFun;
	testfun2();

	typedef void(*testfun3)();
	testfun3 fun3 = testFun;
	fun3();

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "ʾ��2" << std::endl;

	/*
		ʾ��2
	*/
	std::vector<int> values = { 1,2,3,4,5 };

	/*
		lambda
	*/
	forEachs(values, [](int value) {
		std::cout << "value:" << value << std::endl;
		});

	std::cout << "ʾ��3" << std::endl;
	forEachs(values, printFor);

	return 58;
}