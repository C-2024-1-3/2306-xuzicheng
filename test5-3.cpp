#include<iostream>
using namespace std;
class club {
private:
	int length;
	int width;
	int height;
public:
	void setLWH() {
		cout << "请输入长方体的长";
		cin >> length;
		cout << "请输入长方体的宽";
		cin >> width;
		cout << "请输入长方体的高";
		cin >> height;
	}
	int calculateV() {
		return (length * width * height);
	}
};
int main() {
	club c;
	c.setLWH();
	cout << "输入的长方体的体积为：" << c.calculateV() << endl;
}