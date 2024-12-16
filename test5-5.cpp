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
		cout << "当前坐标值x为：" << x << endl;
		cout << "当前坐标值y为：" << y << endl;
	}
};

int main() {
	Point p(60, 80);
	p.display();
	int i, j;
	cout << "请输入x偏移量:";
	cin >> i;
	cout << "请输入y偏移量:";
	cin >> j;
	p.setPoint(i, j);
	p.display();
	return 0;
}