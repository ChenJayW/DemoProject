
#include <iostream>
#include <string>

/*
	�ַ�����һ�� ���ַ��� ��ɣ��������Ϊ 'char' ������.
		���ַ����Դ���ܶ಻ͬ���͵����ݣ�������ĸ�����ֵ�
			C++ Ĭ��ʹ�� Ascii �����ı�����
				���Ҫʹ�����ģ����ĵ��ı�����ʹ�ò�ͬ���͵ı���, �� utf-8 ��
*/
int main32() {

	/*
		char* name ��һ������д��
			char[] name={} ����

		�ַ���������һ����ֹ���ţ�\0 �� null ����ȷ���ַ�������
	*/
	const char* name = "jays";
	std::cout << name << std::endl;

	std::cout << "" << std::endl;
	std::cout << "�ֶ������ַ���" << std::endl;
	/*
		�ֶ������ַ���
			������һ���ַ����� \0 �� null��
				��Ὣ���ڵ�����һ����������������
			����: char name2[] = { 'j','a','y' };
			�򲻻�������룺char name2[] = { 'j','a','y', '\0' };

		��������ջ����(��������)������֪�������Ƿ��ڷ����ڴ�֮��
			Debug �¿��Կ��� name2 �ڴ��ַ���кܶ� cc cc....
	*/
	char name2[] = { 'j','a','y', '\0' };
	//char name2[] = { 'j','a','y' };
	std::cout << name2 << std::endl;

	std::cout << "" << std::endl;
	std::cout << "ʹ�ñ�׼�� std::string" << std::endl;
	/*
		std::string �� basic_string ģ���ʵ��
			string ��һ�����캯������ const char* �� const char[]
			string �ڲ�ʹ�� char ����Ľṹ������װ�˲�������ĺ���
	*/
	std::string name3 = "jays3";
	std::cout << name3 << std::endl;

	std::cout << "" << std::endl;
	std::cout << "ƴ�� std::string" << std::endl;
	/*
		ʹ�� string ����ƴ��ʱ����ֱ�� std::string str ="" + "";
			��Ϊ const char �������޷��ı��
		������ʽ��ʹ�� string �Ĺ��캯����ƴ��
			�� str += "";
		
		ԭ��Ӧ���ǽ� 2 �� const char ������ȡһ���µ� string ��
			���� string
	*/
	std::string str = std::string("jay") + "str";
	str += "test";

	std::cin.get();

	return 32;
}