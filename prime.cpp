#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int d = 2;
	while (d < n) {
		if (n % d == 0) {
			cout << "Not Prime" << endl;
			return 1;
		}
		d = d + 1;
	}
	cout << "Prime" << endl;
}
