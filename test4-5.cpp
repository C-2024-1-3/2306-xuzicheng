//��д���º���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ������ƥ�䣬����s1��s2�е��±꣬���򷵻بC1��
//int indexOf(const char s1[], const char s2[])
//��д���Գ��򣬶�������C�ַ���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ��������ǳ��������������
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
//	// ����һ��std::string����
//	std::string str = "Hello, World!";
//
//	// ����һ���㹻���char�������洢�ַ����Ϳ��ַ�'\0'
//	const size_t strLength = str.length() + 1; // +1 Ϊ�˿��ַ� '\0'
//	char charArray[13];
//
//	// ʹ��strncpy_s������c_str()���ص�C����ַ������Ƶ�char������
//	strncpy_s(charArray, sizeof(charArray) / sizeof(charArray[0]), str.c_str(), _TRUNCATE);
//
//	// ���char��������֤���
//	std::cout << "Char array content: " << charArray << std::endl;
//
//	return 0;
//}
int main() {
	string s1;
	string s2;
	cout << "�������һ���ַ�����";
	//cin >> s1;
	getline(cin, s1);
	cout << "������ڶ����ַ�����";
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
		indexOf(��welcome��, ��We welcome you!��) is 3*/
	int index = indexOf(charArray1, charArray2,strLength1,strLength2);
	if (index == -1) { index--; }
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")" << " is " << index + 1 << endl;
}