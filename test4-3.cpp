//һ��ѧУ��100�������100��ѧ������ѧ��һ�����д�����ǹرյġ�
//��һ��ѧ������ΪS1������ѧУ�󣬴����еĴ���񡣵ڶ���ѧ��S2��
//�ӵڶ�������񣨼�ΪL2����ʼ��ÿ����������񣬽����ǹرա�������ѧ��S3�ӵ����������L3��ʼ��
//ÿ�������������ǵ�״̬�ı䣨���ŵĹ��ϣ����ŵĴ򿪣���ѧ��S4����L4��ʼ��ÿ���ĸ��ı����ǵ�״̬��
//ѧ��S5����L5��ʼ��ÿ������ı�״̬���������ƣ�ֱ��ѧ��S100�ı�L100��״̬��
//������ѧ�����������̣���Щ������ǿ��ŵģ���дһ�������������⣬
//��ʾ���п��ŵĹ��Ӻ��룬����֮����һ���ո������
//��ʾ��ʹ��һ��100��������Ԫ�ص����飬ÿ��Ԫ�ش���������ǿ���true��
//��أ�false����������еĴ�����ǹرյġ�
#include<iostream>
using namespace std;
void change(bool arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j <= size; j += (i + 1)) {
			arr[j - 1] = !arr[j - 1];
		}
	}
}
int main() {
	bool arr[100] = { false };
	int size = 100;
	change(arr, size);
	cout << "���ŵĹ��Ӻ���Ϊ��";
	for (int i = 0; i < size; i++) {
		if (arr[i]) {
			cout << i + 1 << "  ";
		}
	}
}