
#include <iostream>
#include <string>

/*
	字符串是一组 ‘字符’ 组成，可以理解为 'char' 的数组.
		而字符可以代表很多不同类型的内容，比如字母，数字等
			C++ 默认使用 Ascii 进行文本编码
				如果要使用中文，日文等文本，得使用不同类型的编码, 如 utf-8 等
*/
int main32() {

	/*
		char* name 是一种数组写法
			char[] name={} 类似

		字符串最后会有一个终止符号，\0 或 null ，来确认字符串长度
	*/
	const char* name = "jays";
	std::cout << name << std::endl;

	std::cout << "" << std::endl;
	std::cout << "手动设置字符串" << std::endl;
	/*
		手动设置字符串
			如果最后一个字符不是 \0 或 null，
				则会将相邻的数据一起输出，会出现乱码
			乱码: char name2[] = { 'j','a','y' };
			则不会出现乱码：char name2[] = { 'j','a','y', '\0' };

		乱码类似栈守卫(数组守卫)，可以知道数组是否在分配内存之外
			Debug 下可以看到 name2 内存地址后有很多 cc cc....
	*/
	char name2[] = { 'j','a','y', '\0' };
	//char name2[] = { 'j','a','y' };
	std::cout << name2 << std::endl;

	std::cout << "" << std::endl;
	std::cout << "使用标准库 std::string" << std::endl;
	/*
		std::string 是 basic_string 模板的实现
			string 有一个构造函数接受 const char* 或 const char[]
			string 内部使用 char 数组的结构，并封装了操作数组的函数
	*/
	std::string name3 = "jays3";
	std::cout << name3 << std::endl;

	std::cout << "" << std::endl;
	std::cout << "拼接 std::string" << std::endl;
	/*
		使用 string 进行拼接时不能直接 std::string str ="" + "";
			因为 const char 数组是无法改变的
		可以显式的使用 string 的构造函数来拼接
			或 str += "";
		
		原理应该是将 2 个 const char 数组提取一个新的 string 中
			重载 string
	*/
	std::string str = std::string("jay") + "str";
	str += "test";

	std::cin.get();

	return 32;
}