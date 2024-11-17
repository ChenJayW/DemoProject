#include <iostream>
#include <string>


/*
	���麯���ں���ǩ��ǰ���� virtual �ؼ���, () ��� = 0;

	���麯���������� �� Java �ӿڣ�����������ƣ��ǲ��ܽ���ʵ����
		�������̳и���󣬲����Ǵ��麯����Ҳ�ǲ���ʵ����

*/
class Printable29 {
public:
	virtual std::string getClassName() = 0;
};

class Entity29 : public Printable29 {
public:

	/*
		override �� C++ 11 ֮�������
		�������˸��෽��
		���Ǳ�д��

		���麯��������Ҳ�ǿ��ԶԸ����еĴ��麯�����и���
	*/
	std::string getClassName() override {
		return "Entity29";
	}

	/*
		���麯��
	*/
	virtual std::string getName() = 0;
};

class Player29 : public Entity29 {
private:
	std::string m_name;

public:
	Player29(const std::string& name) :m_name(name) {}

	/*
		override �� C++ 11 ֮�������
		�������˸��෽��
		���Ǳ�д��
	*/
	std::string getName() override {
		return m_name;
	}

	std::string getClassName() override {
		return "Player29";
	}
};

class A29 : public Printable29 {
public:
	std::string getClassName() override {
		return "A29";
	}
};


void print29(Printable29* print) {
	std::cout << print->getClassName() << std::endl;
}

int main29() {

	/*
		ʹ�ô��麯��
	*/

	// ʹ�ô��麯�����޷�ʵ������
	//Entity29* e = new Entity29();
	//printName(e);

	// Player29 ������ Entity29 �еĴ��麯���Ļ����޷�����ʵ������ 
	Entity29* p = new Player29("jays");
	Player29* p2 = new Player29("jays2");
	Printable29* p3 = new A29();

	print29(p);
	print29(p2);
	print29(p3);


	std::cin.get();

	return 28;
}