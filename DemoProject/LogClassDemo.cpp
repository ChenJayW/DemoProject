#include<iostream>

/**
class LogLevel {
public:
	static const int ERROR = 0;
	static const int WARN = 1;
	static const int INFO = 2;
};
*/

class Log {
public:
	const int ERROR = 0;
	const int WARN = 1;
	const int INFO = 2;

private:
	int m_LogLevel = INFO;

public:
	void setLogLevel(int level) {
		m_LogLevel = level;
	}
	void warn(const char* msg) {
		if (m_LogLevel == WARN)
		{
			std::cout << msg << std::endl;
		}
	}
};


int main2() {

	std::cout << "Log main" << std::endl;

	Log log;
	log.setLogLevel(log.WARN);
	log.warn("test");

	std::cin.get();

	return 0;
}