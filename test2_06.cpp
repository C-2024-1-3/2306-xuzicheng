#include<iostream>
using namespace std;
int main(){
	int i, j;
	cout << "请输入第一个数：";
	cin >> i;
	cout << "请输入第二个数：";
	cin >> j;
	int k, f, m;
	if (i >= j) {
		k = i;
		f = j;
	}
	else {
		k = j;
		f = i;
	}
	m = k % f;
	while (m != 0) {
		k = f;
		f = m;
		m = k % f;
	}
	cout << "最大公约数为：" << f << endl;
	cout << "最小公倍数为：" << (i * j) / f << endl;
	system("pause");
	return 0;
}