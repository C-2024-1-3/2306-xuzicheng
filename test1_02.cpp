#include<iostream>
using namespace std;
int main(){
	const float pi = 3.14;
	int r;
	cout << "请输入半径：";
	cin >> r;
	int h;
	cout << "请输入圆锥的高：" ;
	cin >> h;
	float v = pi * (r * r) * h / 3.0;
	cout << "圆锥的体积为：" << v << endl;
	system("pause");
	return 0;
}
