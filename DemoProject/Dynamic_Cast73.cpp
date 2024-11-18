#include <iostream>
#include <string>

class Entity {
public:
	virtual void printName() {}
};

class Player : public Entity {

};

class Enemy : public Entity {

};

int main73() {

	Player* play = new Player();

	Entity* plays = play;

	Entity* enemy = new Enemy();
	/*
		dynamic_cast 作用于多态类型
			需要虚函数
		原理：依赖于 运行时类型信息，RTTI
			增加开销
			检查类型需要时间
	*/
	Player* p2 = dynamic_cast<Player*>(enemy);
	Player* p3 = dynamic_cast<Player*>(plays);

	return 73;
}