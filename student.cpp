//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
using namespace std;
#include"student.h"        //��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num:" << num << endl;
    cout << "name:"  << name << endl;
    cout << "sex:"  << sex << endl;
}
void Student::set_value(int a, const char* b, char c) {
	num = a;
	int len = sizeof(b) / sizeof(b[0]);
	for (int i = 0; i < len; i++) {
		name[i] = b[i];
	}
	sex = c;
}