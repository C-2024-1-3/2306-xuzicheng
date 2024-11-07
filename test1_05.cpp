#include<iostream>
using namespace std;
int main(){
	float hua;
	cout << "请输入华氏温度：" << endl;
	cin >> hua;
	float temp = (hua - 32) / 1.8;
	printf("%.2f\n", temp);
	system("pause");
	return 0;
}
