#include <iostream>


class Entity {
public:

	/*
	�����ֶ���ʼ�����л�������

	*/
	float x, y;

	Entity() {
		x = 0.0f;
		y = 0.0f;
	}

	/*
		�вι��캯��
	*/
	Entity(float X, float Y) {
		x = X;
		y = Y;
	}

	/* ɾ��Ĭ�Ϲ��캯��*/
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