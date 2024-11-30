//编写如下函数，检验C字符串s1是否是C字符串s2的子串。如果匹配，返回s1在s2中的下标，否则返回–1。
//int indexOf(const char s1[], const char s2[])
//编写测试程序，读入两个C字符串，检验C字符串s1是否是C字符串s2的子串。下面是程序的运行样例：
#include<iostream>
#include<string>
#include <cstring> 
using namespace std;
int indexOf(const char s1[], const char s2[],int size1,int size2) {
	int i = 0;
	int j = 0;
	int k = 0;
	while (j < size2) {
		if (s2[j] == s1[i]) {
			k = j;
			i++;
			j++;
			for (i; i < size1; i++) {
				if (s1[i] == s2[j]) {
					j++;
				}
				else {
					break;
				}
			}
			if (i == size1) { return k; }
			i = 0;
			j = k;
		}
		j++;
	}
	return -1;
}
//int main() {
//	// 定义一个std::string对象
//	std::string str = "Hello, World!";
//
//	// 定义一个足够大的char数组来存储字符串和空字符'\0'
//	const size_t strLength = str.length() + 1; // +1 为了空字符 '\0'
//	char charArray[13];
//
//	// 使用strncpy_s函数将c_str()返回的C风格字符串复制到char数组中
//	strncpy_s(charArray, sizeof(charArray) / sizeof(charArray[0]), str.c_str(), _TRUNCATE);
//
//	// 输出char数组以验证结果
//	std::cout << "Char array content: " << charArray << std::endl;
//
//	return 0;
//}
int main() {
	string s1;
	string s2;
	cout << "请输入第一个字符串：";
	//cin >> s1;
	getline(cin, s1);
	cout << "请输入第二个字符串：";
	//cin >> s2;
	getline(cin, s2);
	//cout << s2;
	const size_t strLength1 = s1.length();
	char charArray1[20];
	const size_t strLength2 = s2.length();
	char charArray2[40];
	strncpy_s(charArray1, sizeof(charArray1) / sizeof(charArray1[0]), s1.c_str(), _TRUNCATE);
	strncpy_s(charArray2, sizeof(charArray2) / sizeof(charArray2[0]), s2.c_str(), _TRUNCATE);
	/*Enter the first string : welcome
		Enter the second string : We welcome you!
		indexOf(“welcome”, “We welcome you!”) is 3*/
	int index = indexOf(charArray1, charArray2,strLength1,strLength2);
	if (index == -1) { index--; }
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")" << " is " << index + 1 << endl;
}