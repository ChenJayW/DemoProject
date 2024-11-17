#include <iostream>

namespace jay67 {

	/*
		����˫��
	*/

	struct Vector2
	{
		float x, y;
	};


	/*
		������ 2 ���� Vector2 ��ɵ� Vector4
	*/
	struct Vector4
	{

		union {

			struct
			{
				float x, y, z, w;
			};

			struct
			{
				Vector2 a, b;
			};
		};

	};


	void printVector2(const	Vector2& vector2) {
		std::cout << vector2.x << "," << vector2.y << std::endl;
	}
}


int main67() {

	using namespace jay67;

	Vector4 v4 = { 1.0f,2.0f,3.0f,4.0f };

	printVector2(v4.a);
	printVector2(v4.b);

	/*
		�൱���޸��� Vector4.Vector2.b
	*/
	v4.z = 450.0f;
	v4.w = 350.0f;

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "-=============" << std::endl;

	printVector2(v4.a);
	printVector2(v4.b);

	return 67;
}