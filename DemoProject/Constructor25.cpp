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
	}

	/*
		有参构造函数
	*/
	Entity(float X, float Y) {
		x = X;
		y = Y;
	}

	/* 删除默认构造函数*/
	//Entity() = delete;

	void Print() {
		std::cout << x << "," << y << std::endl;
	}
};

int main25() {

	Entity e;
	e.Print();

	Entity e2(10.0f, 15.0f);
	e2.Print();

	std::cin.get();

	return 25;
}