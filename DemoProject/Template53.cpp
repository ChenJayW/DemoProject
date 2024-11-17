#include <iostream>


template<typename T>
void printMsg(T value) {
	std::cout << value << std::endl;
}

template<typename T, int N>
class MyArr {
private:
	T value[N];
public:
	int getSize() const {
		return N;
	}

};

int main53() {

	printMsg(4);
	printMsg("hello");
	printMsg(2.2f);

	MyArr<int, 6> arrs;
	printMsg(arrs.getSize());

	return 53;
}