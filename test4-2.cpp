#include<iostream>
using namespace std;
void bubbleSort(double list[],int listSize) {
	bool changed = true;
	do{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
}
void swap(double& i, double& j) {
	double k = i;
	i = j;
	j = k;
}
int main() {
	double arr[10];
	for (int i = 0; i < 10; i++) {
		cout << "请输入第 " << i + 1 << "个浮点数";
		cin >> arr[i];
	}
	bubbleSort(arr, 10);
	cout << "排序后的数组为";
	for (int i = 0; i < 10; i++) {
		cout << arr[i]<<"   ";
	}
}