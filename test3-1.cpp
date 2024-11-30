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
	cout << "请输入第一个数：";
	cin >> x;
	cout << "请输入第二个数：";
	cin >> y;
	getnum(x, y);
	cout << "最大公因数为：" << y << endl;
	cout << "最小公倍数为：" << x << endl;
}