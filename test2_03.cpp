#include<iostream>
using namespace std;
int main(){
	int x;
	cout << "请输入第一条边的长度：";
	cin >> x;
	int y;
	cout << "请输入第二条边的长度：";
	cin >> y;
	int z;
	cout << "请输入第三条边的长度：";
	cin >> z;
	if (x + y > z && x + z > y && y + z > x) {
		int c = x + y + z;
		if (x == y || y == z || x == z) {
			cout << "可以构成等腰三角形，且周长为：" << c << endl;
		}
		else {
			cout << "可以构成普通三角形，周长为：" << c << endl;
		}
	}
	else {
		cout << "无法构成三角形" << endl;
	}
	system("pause");
	return 0;
}