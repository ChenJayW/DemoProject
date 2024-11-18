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
		dynamic_cast �����ڶ�̬����
			��Ҫ�麯��
		ԭ�������� ����ʱ������Ϣ��RTTI
			���ӿ���
			���������Ҫʱ��
	*/
	Player* p2 = dynamic_cast<Player*>(enemy);
	Player* p3 = dynamic_cast<Player*>(plays);

	return 73;
}