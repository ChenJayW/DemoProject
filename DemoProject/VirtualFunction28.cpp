#include <iostream>
#include <string>

class Entity28 {
public:

	/*
		虚函数在函数签名前加上 virtual 关键字
		可以使子类可以覆盖父类的函数，类似 Java 继承中函数重写的效果
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
		通过成员初始化列表将其赋值给成员变量 m_name
	*/
	Player28(const std::string& name) :m_name(name) {}

	/*
		override 是 C++ 11 之后引入的
		代表覆盖了父类方法
		不是必写的
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
		使用了虚函数
	*/

	Entity28* e = new Entity28();
	printName(e);

	Entity28* p = new Player28("jays");
	printName(p);


	Player28* p2 = new Player28("jays2");
	printName(p2);

	std::cout << "不使用虚函数" << std::endl;

	/*
		不使用虚函数
	*/
	printTestR(e);
	printTestR(p);
	printTestR(p2);

	// 指定子类的类型，才能调用到对应类中的方法的
	std::cout << p2->getTestR() << std::endl;

	std::cin.get();

	return 28;
}