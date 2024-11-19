#include <iostream>
#include <string>
#include <memory.h>
#include <vector>

/*
	valgrind 内存分析工具
*/
void* operator new(size_t size) {
	std::cout << "new my" << std::endl;

	return malloc(size);
}

void operator delete(void* memory) {
	std::cout << "delete my" << std::endl;

	free(memory);
}

void operator delete[](void* memory) {
	std::cout << "operator delete[](void*) called" << std::endl;

	free(memory);
}

class Object {
	int x, y, z;
};


int main() {

	std::string str = "jays hello";

	std::unique_ptr<Object> obj = std::make_unique<Object>();

	int* another = new int[5];

	delete[] another;

	std::vector<int> testarr ;
	testarr.resize(10);

	return 80;
}