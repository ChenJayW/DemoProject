
#include <iostream>

class Entity46 {
public:
	int x;

public:
	Entity46() {
		std::cout << "create Entity46" << std::endl;
	}

	void Print() const {
		std::cout << "hello!" << std::endl;
	}
};

class ScopedPtr46 {
private:
	Entity46* m_obj;

public:
	ScopedPtr46(Entity46* eobj) :m_obj(eobj) {}

	~ScopedPtr46() {
		delete m_obj;
	}

	const Entity46* operator->() const {
		return m_obj;
	}
};


int main46() {

	ScopedPtr46 en = new Entity46();
	
	en->Print();

	//const Entity46* testEn = en.operator->();
	//testEn = new Entity46();

	std::cin.get();
	return 46;
}