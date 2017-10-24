#include <iostream>
using namespace std;

void sortzeroone(int input[], int size) {
	int i = -1;
	int j = size;
	while (j - i > 1) {
		cout << "Enter i = " << i << " j = " << j << endl;
		if (input[i + 1] == 0) {
			i = i + 1;
		} else if (input[j - 1] == 1) {
			j = j - 1;
		} else {
			input[i + 1] = 0;
			input[j - 1] = 1;
			i = i + 1;
			j = j -1;
		}
		cout << "Exit i = " << i << " j = " << j << endl;
	}
}

int main() {

	int input[] = {0,1,1,1,0,1,0,1};
	sortzeroone(input, 8);

}

