#include <iostream>
using namespace std;

int main() {
	int a = 1000;
	int b = 1;
	int c = 124;

	/*
	int i = 10;
	if (i > 5) {
		cout << "first" << endl;
	} else if (i > 6) {
		cout << "second" << endl;
	} else {
		cout << "third" << endl;
	}
*/

	// if else if. 
	if (a >= b && a >= c) {
		cout << a << endl;
	} else if (b >= a && b >= c) {
		cout << b << endl;
	} else {
		cout << c << endl;
	}

	if (a >= b && a >= c) {
		cout << a << "\n";
	} else {
		if (b >= c && b >= a) {
			cout << b << "\n";
		} else {
			cout << c << "\n";
		}
	}
}
