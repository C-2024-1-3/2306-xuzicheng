//��дһ�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10�������������������в��ԡ�
//����ԭ�� int parseHex(const char* const hexString);
//�磺���ú��� parseHex(��A5��); ����165
//#include <iostream>
//#include <string>
//#include <cstring> // ����cstringͷ�ļ���ʹ��strncpy_s
//
//int main() {
//    // ����һ��std::string����
//    std::string str = "Hello, World!";
//
//    // ����һ���㹻���char�������洢�ַ����Ϳ��ַ�'\0'
//    const size_t strLength = str.length() + 1; // +1 Ϊ�˿��ַ� '\0'
//    char charArray[13];
//
//    // ʹ��strncpy_s������c_str()���ص�C����ַ������Ƶ�char������
//    strncpy_s(charArray, sizeof(charArray) / sizeof(charArray[0]), str.c_str(), _TRUNCATE);
//
//    // ���char��������֤���
//    std::cout << "Char array content: " << charArray << std::endl;
//
//    return 0;
//}
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
	cout << "������һ��ʮ����������";
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
			cout << "�������������Ƿ�����" << endl;
		}
		sum = sum * 16 + k;
	}
	cout << "ת��Ϊʮ�����ǣ�" << sum << endl;
	delete[] charArray;
}