#include<iostream>
using namespace std;
int main()
{
	int k = 0;//给k进行定义与赋值
	Int i = k + 1;//k变量未定义
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;//自增运算符实现逻辑错误，无法实现输入i++，因为它是先打印，再++
	cout << "Welcome to C++"<<endl;
	return 0;
}