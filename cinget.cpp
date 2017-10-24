#include <iostream>
using namespace std;

int main() {

	char input;
	input = cin.get();
	int count = 0;
	while (input != '$') {
		count++;
		input = cin.get();
	}
	cout << count << endl;

	int a1;
	int b;
	cin >> a1;
	cin >> b;

	char a;
	int i = 0;
	while (i < 20) {
		//cin >> a;
		a = cin.get();
		cout << a << endl;
		i++;
	}
}
