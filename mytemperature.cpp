#include"mytemperature.h"
//���϶ȣ��棩���ڻ��϶ȣ���F����ȥ32���ٳ���5 / 9�� T ����C�� = ��T ����F�� - 32����5 / 9123��
//���϶ȣ���F���������϶ȣ��棩����1.8���ټ���32�� T ����F�� = 32 + T ����C�� �� 1.843��
double celsius_to_fah(double cel) {
	double fah = cel * 1.843 + 32;
	return fah;
}
double fahrenheit_to_cels(double fah) {
	double cel = (fah - 32) * 5 / 9;
	return cel;
}
