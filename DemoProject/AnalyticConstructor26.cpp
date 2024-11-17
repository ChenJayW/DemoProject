#include <iostream>


class Entity {
public:

	/*
	必须手动初始化所有基本类型

	*/
	float x, y;

	Entity() {
		x = 0.0f;
		y = 0.0f;
		std::cout << "create constructor" << std::endl;
	}

	/*
		有参构造函数
	*/
	Entity(float X, float Y) {
		x = X;
		y = Y;
	}

	/*
		析构造器
		在实例被销毁时调用
		释放实际在堆中所占用的内存

		在栈中创建时，退出栈后会调用析构造器
		使用 new，free 后，可以使用 Delete 关键字调用析构造器
	*/
	~Entity() {
		std::cout << "delete constructor" << std::endl;
	}


	/*
		删除默认构造函数
	*/
	//Entity() = delete;

	void Print() {
		std::cout << x << "," << y << std::endl;
	}
};

void funEntity() {
	Entity e;
	e.Print();
}

int main26() {
	funEntity();

	std::cin.get();

	return 25;
}