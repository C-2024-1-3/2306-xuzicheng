#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	unsigned int testUnint = 65534; // 0xfffe
	cout << "output in unsigned int type: " << testUnint << endl;
	cout << "output in char type: " << static_cast<char>(testUnint) << endl;
	cout << "output in short type: " << static_cast<short>(testUnint) << endl;//short是16位的，可以包含65534，但是其有符号，首位表示正负，而65534其最高位为1，故为负数，为66535 - x + 1 的补码；
	cout << "output in int type: " << static_cast<int>(testUnint) << endl;
	cout << "output in double type: " << static_cast<double>(testUnint) << endl;
	cout << "output in double type: " << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type: " << hex << testUnint << endl;
	cout << "output in Oct unsigned int type: " << oct << testUnint << endl;
	system("pause");
	return 0;
}