#include<iostream>
using namespace std;
void getnum(int& x, int& y) {
	int k;
	int i = x;
	int j = y;
	if (x > y) {
		k = y;
		y = x;
		x = k;
	}
	while (k != 0) {
		k = y % x;
		y = x;
		x = k;
	}
	x = i * j / y;
}

int main() {
	int x, y;
	cout << "�������һ������";
	cin >> x;
	cout << "������ڶ�������";
	cin >> y;
	getnum(x, y);
	cout << "�������Ϊ��" << y << endl;
	cout << "��С������Ϊ��" << x << endl;
}