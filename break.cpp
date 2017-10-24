#include <iostream>
using namespace std;

int main() {
	int n = 10;
	int k = 1;
	while (k < n) {
		int i = 1;
		while (i < n) {
			cout << i;
			if (i == k) {
				break;
			}
			i = i + 1;
		}
		k = k + 1;
		cout << endl;
	}
}
