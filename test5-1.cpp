#include<iostream>
using namespace std;
class Time             // ����Time��
{
public:
	void setHMS() {
		cout << "������Сʱ��";
		cin >> hour;
		cout << "��������ӣ�";
		cin >> minute;
		cout << "���������ӣ�";
		cin >> sec;
	}
	void printHMS() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private:       // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time tl;       //����t1ΪTime�����
	tl.setHMS();
	tl.printHMS();
	return 0;
}