#include <iostream>
using namespace std;

int prod(int a, int b) {
	cout << "prod 1" << endl;
	int ans = a * b;
	cout << "prod 2" << endl;
	return ans;
}

int fact(int n) {
	cout << "fact 1" << endl;
	int ans = 1;
	int i = 1;
	while (i <= n) {
		ans = prod(ans, i);
		i++;
	}
	cout << "fact 2" << endl;
	return ans;
}

int increment2(int i) {
	i++;
	return i;
}

void increment(int i) {
	i++;
}

int main() {

	int fn = 13;
	fact(fn);
	cout << fn << endl;

	int a1 = 10;
	increment2(a1);
	cout << a1 << endl;

	int a = 10;
	increment(a);
	cout << a << endl;

	int n; // 3
	int r; // 1
	cin >> n >> r;

	cout << "main 1" << endl;
	int output = fact(n)/(fact(r)*fact(n - r));
	cout << "main 2" << endl;
}

