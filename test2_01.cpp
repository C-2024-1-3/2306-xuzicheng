#include<iostream>
using namespace std;
int main(){
	char x;
	cout << "请输入一个字符";
	cin >> x;
	if ('a' <= x && x <= 'z') {
		x = x - 'a' + 'A';
		cout << "转换后的字符是：" << x;
	}
	else {
		cout << static_cast<int>(x) + 1 << endl;
	}
	system("pause");
	return 0;
}