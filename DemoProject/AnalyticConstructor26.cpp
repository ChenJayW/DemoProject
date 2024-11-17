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
		std::cout << "create constructor" << std::endl;
	}

	/*
		�вι��캯��
	*/
	Entity(float X, float Y) {
		x = X;
		y = Y;
	}

	/*
		��������
		��ʵ��������ʱ����
		�ͷ�ʵ���ڶ�����ռ�õ��ڴ�

		��ջ�д���ʱ���˳�ջ��������������
		ʹ�� new��free �󣬿���ʹ�� Delete �ؼ��ֵ�����������
	*/
	~Entity() {
		std::cout << "delete constructor" << std::endl;
	}


	/*
		ɾ��Ĭ�Ϲ��캯��
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