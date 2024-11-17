#include <iostream>

struct Vector241 {

public:
	float x, y;

	Vector241(float x, float y) : x(x), y(y) {}

	Vector241 add(const Vector241& other)  const
	{
		return Vector241(x + other.x, y + other.y);
	}

	Vector241 multiply(const Vector241& other) const {
		return Vector241(x * other.x, y * other.y);
	}

	/*
		重载运算符
	*/
	Vector241 operator+(const Vector241& other) {
		return add(other);
	}
	Vector241 operator*(const Vector241& other) {
		return multiply(other);
	}
};

/*
	重载 std::cout <<
*/
std::ostream& operator<<(std::ostream& stream, const Vector241& other) {
	stream << other.x << "," << other.y;
	return stream;
}

int main41() {

	Vector241 position(4.0f, 4.0f);
	Vector241 speed(0.5f, 1.5f);
	Vector241 powerup(1.1f, 1.1f);

	Vector241 result = position.add(speed.multiply(powerup));

	//使用重载运算符
	Vector241 res = position + (speed * powerup);

	std::cout << res << std::endl;

	std::cin.get();
	return 41;
}