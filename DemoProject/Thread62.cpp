#include <iostream>
#include <thread>

static bool is_end = false;

void doWork() {

	using namespace std::literals::chrono_literals;

	while (!is_end)
	{
		std::cout << "doWork start " << std::endl;
		std::this_thread::sleep_for(1s);
	}
}

int main62() {

	std::thread work(doWork);

	std::cin.get();
	is_end = true;

	// ���� Java �� wait �ȴ��߳̽���
	work.join();

	std::cout << "thread end " << std::endl;

	return 62;
}