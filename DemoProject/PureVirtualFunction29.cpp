#include <iostream>
#include <string>


/*
	纯虚函数在函数签名前加上 virtual 关键字, () 后加 = 0;

	纯虚函数定义后的类 和 Java 接口，抽象类很类似，是不能进行实例化
		如果子类继承父类后，不覆盖纯虚函数，也是不能实例化

*/
class Printable29 {
public:
	virtual std::string getClassName() = 0;
};

class Entity29 : public Printable29 {
public:

	/*
		override 是 C++ 11 之后引入的
		代表覆盖了父类方法
		不是必写的

		纯虚函数的子类也是可以对父类中的纯虚函数进行覆盖
	*/
	std::string getClassName() override {
		return "Entity29";
	}

	/*
		纯虚函数
	*/
	virtual std::string getName() = 0;
};

class Player29 : public Entity29 {
private:
	std::string m_name;

public:
	Player29(const std::string& name) :m_name(name) {}

	/*
		override 是 C++ 11 之后引入的
		代表覆盖了父类方法
		不是必写的
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
		使用纯虚函数
	*/

	// 使用纯虚函数是无法实例化的
	//Entity29* e = new Entity29();
	//printName(e);

	// Player29 不覆盖 Entity29 中的纯虚函数的话是无法进行实例化的 
	Entity29* p = new Player29("jays");
	Player29* p2 = new Player29("jays2");
	Printable29* p3 = new A29();

	print29(p);
	print29(p2);
	print29(p3);


	std::cin.get();

	return 28;
}