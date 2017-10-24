#include <iostream>
using namespace std;

int main() {
	int i = 0;
	while (i < 10) {

		i = i + 1;
	}

	for (int j = 0, k = 1 ;j < 10 && k < 100;j = j + 1, k = k + 1) {
		cout << j << endl;	
		if (j == 5) {
			break;
		}
		if (j == 4) {
			continue;
		}
		cout << j << endl;	
	}

}

