
#include <iostream>
#include <string>

/*
	���� Java �ĳ�Ա�����η���public, private, protected, default
	C++ ֻ�� public, private, protected.
		class Ĭ�ϵ����η��� private
		struct Ĭ�ϵ����η��� public
*/

class Entity30 {
	float ts;
private:
	int a;
public:
	int b;
protected:
	int c;
};

class player30 {
private:
	std::string name;
public:
	player30(const std::string& name) : name(name) {
	}
};