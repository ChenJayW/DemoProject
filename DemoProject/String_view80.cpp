#include <iostream>
#include <string>



int main80() {
	std::string name = "chen wenjie";

	const char* names = name.c_str() + 2;

	std::cout << names << std::endl;
	//std::cout << names  << std::endl;

	std::string_view test(name.c_str(), 4);


	return 80;
}