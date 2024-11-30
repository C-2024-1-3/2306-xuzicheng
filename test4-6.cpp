//字符串中每个字母出现的次数：
//请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
//void count(const char s[], int counts[])
//counts是一个有26个元素的整数数组。const[0]，const[1]，…，const[25]
//分别记录a，b，…，z出现的次数。字母不分大小写，例如字母A和字母a都被看作a。
//编写测试程序，读入字符串并调用count函数，显示非零的次数。下面是程序的一个运行样例：
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void count(const char s[], int counts[]) {
	int size = sizeof(s) / sizeof(s[0]);
	int index = 0;
	for (int i = 0; i < size; i++) {
		if ('a' <= s[i] && s[i] <= 'z') {
			index = s[i] - 'a';
			counts[index] += 1;
		}
		if ('A' <= s[i] && s[i] <= 'Z') {
			index = s[i] - 'A';
			counts[index] += 1;
		}
	}
}
//std::string str = "Hello, World!";
//
//// 定义一个足够大的char数组来存储字符串和空字符'\0'
//const size_t strLength = str.length() + 1; // +1 为了空字符 '\0'
//char charArray[13];
//
//// 使用strncpy_s函数将c_str()返回的C风格字符串复制到char数组中
//strncpy_s(charArray, sizeof(charArray) / sizeof(charArray[0]), str.c_str(), _TRUNCATE);
int main() {
	cout << "请输入一个字符串：(不要超过8个字符)";
	string s;
	getline(cin, s);
	const size_t size = s.length() + 1;
	int counts[26] = { 0 };
	char* charArray = new char[size];
	strncpy_s(charArray, sizeof(charArray) / sizeof(charArray[0]), s.c_str(), _TRUNCATE);
	count(charArray, counts);
	int index = 0;
	while (index < 26) {
		if (counts[index] != 0) {
			cout << (char)('a' + index) << "有" << counts[index] << "个" << endl;
		}
		index++;
	}
	delete[] charArray;
}