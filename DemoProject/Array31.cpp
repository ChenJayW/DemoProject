#include <iostream>

/*
	- 数组原理则是在内存中分配对应类型连续空间.
	- 比如 int 使用 4 个字节，分配为 5 的大小 int 数组时，则是
		分配了 4*5 字节大小的连续空间.
	- 并使用指针来操作对应的内存块
			
			使用语法是来操作
				int example[5];
				example[2] = 5;

			使用指针来操作
				int* pre = example;
				*(pre + 2) = 6;

	使用指针需要注意出现的 内存碎片，缓存丢失等问题
*/

class Entity31 {
public:

	/*
		使用间接寻址的方式

			真正的数据在另外一个块空间，而实例存储是一个地址
	*/
	int* testanother = new int[5];

	Entity31() {

	}

};

int main31() {
	Entity31 e;


	/*
		分配栈空间的数组.
		当函数退出时，会销毁对应的栈空间.
	*/
	int example[5];

	example[2] = 2;

	/*
		分配堆空间的数组需要使用 delete[] 清理, 不然可能出现内存泄漏

		需要比较长的生命周期
		比如某个函数返回了一个数组
	*/
	int* another = new int[5];

	delete[] another;

	std::cin.get();

	return 31;
}

