#include<iostream>
using namespace std;
class Time             // 定义Time类
{
public:
	void setHMS() {
		cout << "请输入小时：";
		cin >> hour;
		cout << "请输入分钟：";
		cin >> minute;
		cout << "请输入秒钟：";
		cin >> sec;
	}
	void printHMS() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private:       // 数据成员为公用的
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time tl;       //定义t1为Time类对象
	tl.setHMS();
	tl.printHMS();
	return 0;
}