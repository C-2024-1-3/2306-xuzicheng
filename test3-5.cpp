//���ӳ��ң����ӵ�һ��ժ�������ӣ���������һ�룬������񫣬
//�ֳ���һ�����ڶ����ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ�����Ժ�ÿ����ˣ�
//����10�죬����ֻʣ���һ�����ӣ��ʣ���һ����ӹ�ժ�������ӣ��õݹ�ʵ�֣���
#include<iostream>
using namespace std;
int peach(int day) {
	if (day == 10) {
		return 1;
	}
	else {
		return (peach(day + 1) + 1) * 2;
	}
}
int main() {
	int num = peach(1);
	cout << "���ӵ�һ��һ��ժ��" << num << "������" << endl;
}