#include<iostream>
using namespace std;
class club {
private:
	int length;
	int width;
	int height;
public:
	void setLWH() {
		cout << "�����볤����ĳ�";
		cin >> length;
		cout << "�����볤����Ŀ�";
		cin >> width;
		cout << "�����볤����ĸ�";
		cin >> height;
	}
	int calculateV() {
		return (length * width * height);
	}
};
int main() {
	club c;
	c.setLWH();
	cout << "����ĳ���������Ϊ��" << c.calculateV() << endl;
}