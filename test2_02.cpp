#include<iostream>
using namespace std;
int main(){
	float x;
	cout << "请输入x的值：";
	cin >> x;
	float result;
	if (0 < x && x < 1) {
		result = 3 - 2 * x;
	}
	else if (1 <= x && x < 5) {
		result = 2 / (4 * x) + 1;
	}
	else if (5 <= x && x < 10) {
		int a = (static_cast<int>(x));
		result = a * a;
	}
	else {
		result = 0;
	}
	cout << result;//程序输入0会报错，因为题中没有给出0的定义，这会导致result后面没有值，故加上其他条件下均为0的语句
	system("pause");
	return 0;
}