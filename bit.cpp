#include <iostream>
using namespace std;

int main() {
	int i = 10;
	i = i << 1;
	cout << i << endl;
	
	int c = -1073741825;
	c = c >> 1;
	cout << c << endl;

	int b = -1073741825;
	b = b << 1;

	cout << b << endl;

}

