#include <iostream>
#include <string>

class Entity28 {
public:

	/*
		�麯���ں���ǩ��ǰ���� virtual �ؼ���
		����ʹ������Ը��Ǹ���ĺ��������� Java �̳��к�����д��Ч��
	*/
	virtual std::string getName() {
		return "Entity";
	}

	std::string getTestR() {
		return "getTestR -> Entity";
	}
};

class Player28 : public Entity28 {
private:
	std::string m_name;

public:
	/*
		ͨ����Ա��ʼ���б��丳ֵ����Ա���� m_name
	*/
	Player28(const std::string& name) :m_name(name) {}

	/*
		override �� C++ 11 ֮�������
		�������˸��෽��
		���Ǳ�д��
	*/
	std::string getName() override {
		return m_name;
	}

	std::string getTestR() {
		return m_name;
	}
};


void printName(Entity28* entity) {
	std::cout << entity->getName() << std::endl;
}

void printTestR(Entity28* entity) {
	std::cout << entity->getTestR() << std::endl;
}

int main28() {

	/*
		ʹ�����麯��
	*/

	Entity28* e = new Entity28();
	printName(e);

	Entity28* p = new Player28("jays");
	printName(p);


	Player28* p2 = new Player28("jays2");
	printName(p2);

	std::cout << "��ʹ���麯��" << std::endl;

	/*
		��ʹ���麯��
	*/
	printTestR(e);
	printTestR(p);
	printTestR(p2);

	// ָ����������ͣ����ܵ��õ���Ӧ���еķ�����
	std::cout << p2->getTestR() << std::endl;

	std::cin.get();

	return 28;
}