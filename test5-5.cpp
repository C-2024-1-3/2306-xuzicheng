#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int x,int y) {
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "��ǰ����ֵxΪ��" << x << endl;
		cout << "��ǰ����ֵyΪ��" << y << endl;
	}
};

int main() {
	Point p(60, 80);
	p.display();
	int i, j;
	cout << "������xƫ����:";
	cin >> i;
	cout << "������yƫ����:";
	cin >> j;
	p.setPoint(i, j);
	p.display();
	return 0;
}