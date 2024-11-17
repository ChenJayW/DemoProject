
#include <iostream>
#include <string>

/*
	类似 Java 的成员的修饰符，public, private, protected, default
	C++ 只有 public, private, protected.
		class 默认的修饰符是 private
		struct 默认的修饰符是 public
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