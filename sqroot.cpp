#include <iostream>
using namespace std;

double sqroot(int n, int d) {
	double i = 0;
	double increment = 1;
	int currentDecimal = 0;

	while (currentDecimal <= d) {
		int a = 0;
		while (i * i <= n) {
			i = i + increment;
			a = a + 1;
		}
		i = i - increment;
		a = a -1;
		cout << a << endl;
		increment = increment * 0.1;
		currentDecimal = currentDecimal + 1;
	}	
	return i;
}

int main() {
	int n;
	cout << "Enter n" << endl;
	cin >> n;
	int d;
	cin >> d;
	double ans = sqroot(n, d);
	cout << ans << endl;
}
