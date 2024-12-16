#include<iostream>
using namespace std;
class Student {
public:
	void setIG() {
		cout << "请输入学生的ID：";
		cin >> id;
		cout << "请输入学生的成绩：";
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
		cout << "请输入第" << i + 1 << "位学生的数据:" << endl;
		s[i].setIG();
	}
	Student x = max(s, 5);
	cout << "成绩最高者的学号为：" << x.getId() << endl;
	cout << "成绩最高者的成绩为：" << x.getGrade() << endl;
	delete[] s;
	return 0;
}