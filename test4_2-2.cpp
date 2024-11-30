//编写一个函数将以字符串形式表示的一个16进制数转换为10进制数，并在主函数中测试。
//函数原型 int parseHex(const char* const hexString);
//如：调用函数 parseHex(“A5”); 返回165
//#include <iostream>
//#include <string>
//#include <cstring> // 包含cstring头文件以使用strncpy_s
//
//int main() {
//    // 定义一个std::string对象
//    std::string str = "Hello, World!";
//
//    // 定义一个足够大的char数组来存储字符串和空字符'\0'
//    const size_t strLength = str.length() + 1; // +1 为了空字符 '\0'
//    char charArray[13];
//
//    // 使用strncpy_s函数将c_str()返回的C风格字符串复制到char数组中
//    strncpy_s(charArray, sizeof(charArray) / sizeof(charArray[0]), str.c_str(), _TRUNCATE);
//
//    // 输出char数组以验证结果
//    std::cout << "Char array content: " << charArray << std::endl;
//
//    return 0;
//}
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
	cout << "请输入一个十六进制数：";
	string s;
	cin >> s;
	const int size = s.length() + 1;
	char* charArray = new char[size];
	strncpy_s(charArray, size , s.c_str(), _TRUNCATE);
	int sum = 0;
	int k = 0;
	for (int i = 0; i < size - 1; i++) {
		k = 0;
		if ('0' <= charArray[i] && charArray[i] <= '9') {
			k = charArray[i] - '0';
		}
		else if ('A' <= charArray[i] && charArray[i] <= 'F') {
			k = charArray[i] - 'A' + 10;
		}
		else if('a' <= charArray[i] && charArray[i] <= 'f'){
			k = charArray[i] - 'a' + 10;
		}
		else {
			cout << "请检查您的输入是否有误" << endl;
		}
		sum = sum * 16 + k;
	}
	cout << "转换为十进制是：" << sum << endl;
	delete[] charArray;
}