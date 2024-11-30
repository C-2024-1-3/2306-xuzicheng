//�ַ�����ÿ����ĸ���ֵĴ�����
//��ʹ�����º���ͷ��д�����������ַ�����ÿ����ĸ���ֵĴ�����
//void count(const char s[], int counts[])
//counts��һ����26��Ԫ�ص��������顣const[0]��const[1]������const[25]
//�ֱ��¼a��b������z���ֵĴ�������ĸ���ִ�Сд��������ĸA����ĸa��������a��
//��д���Գ��򣬶����ַ���������count��������ʾ����Ĵ����������ǳ����һ������������
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
//// ����һ���㹻���char�������洢�ַ����Ϳ��ַ�'\0'
//const size_t strLength = str.length() + 1; // +1 Ϊ�˿��ַ� '\0'
//char charArray[13];
//
//// ʹ��strncpy_s������c_str()���ص�C����ַ������Ƶ�char������
//strncpy_s(charArray, sizeof(charArray) / sizeof(charArray[0]), str.c_str(), _TRUNCATE);
int main() {
	cout << "������һ���ַ�����(��Ҫ����8���ַ�)";
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
			cout << (char)('a' + index) << "��" << counts[index] << "��" << endl;
		}
		index++;
	}
	delete[] charArray;
}