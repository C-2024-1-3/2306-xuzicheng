//编程实现摄氏温度到华氏温度的转换：
//编写一个头文件，包含下面两个函数：
//double celsius_to_fah(double cel)    //摄氏温度到华氏温度
//double fahrenheit_to_cels(double fah) //华氏温度到摄氏温度
//实现头文件，并编写测试程序，调用函数显示如下结果：
//Celsius    Fahrenheit    | Fahrenheit       Celsius
//40.0       105.0 | 120.0            48.89
//39.0       102.0 | 110.0            43.33
//……       ……         | ……             ……
//31.0        87.8 | 30.0 - 1.11
//（测试程序为主模块，即main()函数所在的CPP文件，
//头文件mytemperature.h只有函数声明；函数定义写在另一CPP文件mytemperature.cpp）
#include<iostream>
using namespace std;
#include"mytemperature.cpp"
int main() {
	cout << "Celsius" << "\t" << "Fahrenheit" << "\t" << "|" << "\t" <<
		"Fahrenheit" << "\t" << "Celsius" << endl;
	//Celsius    Fahrenheit    | Fahrenheit       Celsius
	//40.0       105.0 | 120.0            48.89
	//39.0       102.0 | 110.0            43.33
	//……       ……         | ……             ……
	//31.0        87.8 | 30.0 - 1.11
	double cel1 = 40.0;
	double fah1;
	double fah2 = 120.0;
	double cel2;
	while (cel1 > 30.0 && fah2 > 29.0) {
		fah1 = celsius_to_fah(cel1);
		cout << cel1 << "\t" << fah1 << "\t" <<"        "<<"|" << "\t";
		cel1 -= 1.0;
		cel2 = fahrenheit_to_cels(fah2);
		cout << fah2 << "\t" << cel2 << endl;
		fah2 -= 10.0;
	}


}
