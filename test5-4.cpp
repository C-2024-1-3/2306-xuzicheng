#include<iostream>
using namespace std;
class Student {
public:
	void setIG() {
		cout << "������ѧ����ID��";
		cin >> id;
		cout << "������ѧ���ĳɼ���";
		cin >> grade;
	}
	int getId() {
		return id;
	}
	int getGrade() {
		return grade;
	}
private:
	int id;
	int grade;
};
Student max(Student* s,int size) {
	Student* temp = s;
	for (int i = 0; i < size; i++) {
		if (temp->getGrade() < s->getGrade()) {
			temp = s;
		}
		s++;
	}
	return *temp;
}
int main() {
	Student s1;
	Student s2;
	Student s3;
	Student s4;
	Student s5;
	Student* s = new Student[5];
	for (int i = 0; i < 5; i++) {
		cout << "�������" << i + 1 << "λѧ��������:" << endl;
		s[i].setIG();
	}
	Student x = max(s, 5);
	cout << "�ɼ�����ߵ�ѧ��Ϊ��" << x.getId() << endl;
	cout << "�ɼ�����ߵĳɼ�Ϊ��" << x.getGrade() << endl;
	delete[] s;
	return 0;
}