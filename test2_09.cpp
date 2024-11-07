#include<iostream>
using namespace std;
int main(){
	int sum = 0;
	int i = 2;
	int j = 0;
	while (i <= 100) {
		sum += i;
		i *= 2;
		j++;

	}
	float price = sum * 0.8;
	cout << "每天平均花" << price / j << "元" << endl;
	system("pause");
	return 0;
}