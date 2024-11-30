#include<iostream>
using namespace std;
bool is_prime(int num) {
	int k = num / 2;
	for (int i = 2; i < k; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int sum = 0;
	int k = 2;
	while (sum < 200) {
		if (is_prime(k)) {
			cout << k << "\t";
			sum++;
			if (sum % 10 == 0) {
				cout << endl;
			}
		}
		k++;
	}
}