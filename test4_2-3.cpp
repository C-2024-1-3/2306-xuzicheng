//(3)�������н���һ��̬���飨ʹ��new��������Ԫ�ؼ�Ԫ�ظ����ɼ������룬��̬���Թ۲�ָ�뼰ָ��ָ������ݣ�
//���һ��������������С��������
//����������ָ�뷽ʽ�������Ԫ�أ�����ͷ������ڴ棨delete����
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
	cout << "����������ĸ���:";
	cin >> size;
	int* arr = new int[size];
	int* temp = arr;
	for (int i = 0; i < size; i++) {
		cout << "�������" << i + 1 << "����";
		cin >> *temp;
		temp++;
	}
	bubbleSort(arr, size);
	cout << "����������Ϊ��";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "  ";
	}
	delete[] arr;
}