#include<iostream>
using namespace std;
int main(){
	for (int i = 5; i > 0; i--) {
		for (int j = 0; j < (6 - i); j++) {
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}