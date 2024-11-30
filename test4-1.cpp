#include<iostream>
using namespace std;
bool isInarr(int arr[], int i, int size) {
	for (int j = 0; j < size; j++) {
		if (arr[j] == i) { return true; }
	}
	return false;
}
int main() {
	const int size = 10;
	int arr[size] = {0};
	int result[size];
	int j = 0;
	for (int i = 0; i < size; i++) {
		cout << "请输入第" << i + 1 << "个数";
		cin >> arr[i];
		if (!isInarr(result, arr[i], size)) {
			result[j] = arr[i];
			j++;
		}
	}
	cout << "您输入的数为：";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "   ";
	}
	cout << endl<<"修改后为：";
	for (int i = 0; i < j; i++) {
		cout << result[i] << "   ";
	}

}
