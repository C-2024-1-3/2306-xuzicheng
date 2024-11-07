#include<iostream>
#include<string>
using namespace std;
int main(){
	string line;
	int alpha = 0;
	int space = 0;
	int num = 0;
	int otherChar = 0;
	cout << "请输入一串字符" << endl;
	getline(cin, line);
	for (char ch : line) {
		if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z')) {
			alpha++;
		}
		else if (ch == ' ') {
			space++;
		}
		else if ('0' <= ch && ch <= '9') {
			num++;
		}
		else {
			otherChar++;
		}
	}
	cout << "Number of letters: " << alpha << endl;
	cout << "Number of spaces: " << space << endl;
	cout << "Number of numbers: " << num << endl;
	cout << "Number of other characters: " << otherChar << endl;
	system("pause");
	return 0;
}