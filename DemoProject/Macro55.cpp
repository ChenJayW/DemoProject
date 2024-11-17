
#include <iostream>

/*
	∫Í∂®“Â
*/
#if 0
#define JS_DEBUG  1
#else
#define JS_RELEASE
#endif


#if JS_DEBUG == 1
#define print(t) std::cout << t << std::endl;
#elif defined(JS_RELEASE)
#define print(t)
#endif

int main55() {

	print("macro app");

	return 55;
}