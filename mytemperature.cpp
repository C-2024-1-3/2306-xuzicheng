#include"mytemperature.h"
//摄氏度（℃）等于华氏度（°F）减去32，再乘以5 / 9： T （°C） = （T （°F） - 32）×5 / 9123。
//华氏度（°F）等于摄氏度（℃）乘以1.8，再加上32： T （°F） = 32 + T （°C） × 1.843。
double celsius_to_fah(double cel) {
	double fah = cel * 1.843 + 32;
	return fah;
}
double fahrenheit_to_cels(double fah) {
	double cel = (fah - 32) * 5 / 9;
	return cel;
}
