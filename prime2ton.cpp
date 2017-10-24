#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 2;
	while (i <= n) {
		// check if i is prime
		int j = 2;
		bool prime = true;
		while (j < i) {
			if (i % j == 0) {
				prime = false;
				break;
			}
			j= j + 1;
		}
		if (prime) {
			cout << i << endl;
		}
		i = i + 1;
	}

}

