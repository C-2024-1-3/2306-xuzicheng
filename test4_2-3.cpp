//(3)主程序中建立一动态数组（使用new），数组元素及元素个数由键盘输入，动态调试观察指针及指针指向的内容；
//设计一个函数对数组由小到大排序；
//主程序中用指针方式输出数组元素；最后释放数组内存（delete）。
#include<iostream>
using namespace std;
void bubbleSort(int arr[], int size) {
	int temp = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main() {
	int size = 0;
	cout << "请输入数组的个数:";
	cin >> size;
	int* arr = new int[size];
	int* temp = arr;
	for (int i = 0; i < size; i++) {
		cout << "请输入第" << i + 1 << "个数";
		cin >> *temp;
		temp++;
	}
	bubbleSort(arr, size);
	cout << "排序后的数组为：";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "  ";
	}
	delete[] arr;
}