#include <iostream>


class Entity {
public:
	float X, Y;

	void move(float xa, float ya) {
		X += xa;
		Y += ya;
	}

};

/*
	ผฬณะ
*/
class Player : public Entity {

public:
	const char* Name;

	void printName() {
		std::cout << Name << std::endl;
	}

};

int main27() {


	std::cout << sizeof(Entity) << std::endl;
	std::cout << sizeof(Player) << std::endl;

	Player player;

	player.move(1, 2);
	player.X = 2.0f;

	player.Name = "jays";
	player.printName();

	std::cin.get();

	return 25;
}