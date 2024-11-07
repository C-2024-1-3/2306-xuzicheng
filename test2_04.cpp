#include<iostream>
using namespace std;
int main(){
	cout << "输入1表示进行‘+’" << endl;
	cout << "输入2表示进行‘-’" << endl;
	cout << "输入3表示进行‘*’" << endl;
	cout << "输入4表示进行‘/’" << endl;
	cout << "输入5表示进行‘%’" << endl;
	cout << "输入0退出" << endl;
	int i;
	while (true) {
		cout << "请输入你的操作：";
		cin >> i;
		if (i == 1) {
			cout << "请输入第一个数：";
			float j , k;
			cin >> j;
			cout << "请输入第二个数：";
			cin >> k;
			cout << "运算结果为：" << j + k << endl;
		}
		else if (i == 2) {
			cout << "请输入第一个数：";
			float j, k;
			cin >> j;
			cout << "请输入第二个数：";
			cin >> k;
			cout << "运算结果为：" << j - k << endl;
		}
		else if (i == 3) {
			cout << "请输入第一个数：";
			float j, k;
			cin >> j;
			cout << "请输入第二个数：";
			cin >> k;
			cout << "运算结果为：" << j * k << endl;
		}
		else if (i == 4) {
			cout << "请输入第一个数：";
			float j, k;
			cin >> j;
			cout << "请输入第二个数：";
			cin >> k;
			while (k == 0) {
				cout << "除数不能为0" << endl;
				cout << "请输入第二个数：";
				cin >> k;
			}
			cout << "运算结果为：" << j / k << endl;
		}
		else if (i == 5) {
			cout << "请输入第一个数：";
			int j, k;
			cin >> j;
			cout << "请输入第二个数：";
			cin >> k;
			while (k == 0) {
				cout << "取余数不能为0" << endl;
				cout << "请输入第二个数：";
				cin >> k;
			}
			cout << "运算结果为：" << j % k << endl;
		}
		if (i == 0) {
			cout << "退出程序" << endl;
			break;
		}
		cout << "——————————————————————————" << endl;
	}
	system("pause");
	return 0;
}