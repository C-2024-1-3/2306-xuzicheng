#include<iostream>
using namespace std;
int main(){
	int a;
	cout << "请输入一个数：";
	cin >> a;
	if (a <= 0) {
		cout << "输入的数字不合法" << endl;
	}
	else {
		float x1 = a;
		float x2 = (x1 + (a / x1)) / 2.0;
		while (1e-10f < x2 - x1 || x2 - x1 < -1e-10f) {
			x1 = x2;
			x2 = (x1 + (a / x1)) / 2.0;
		}
		cout << x2 << endl;
	}

	system("pause");
	return 0;
}