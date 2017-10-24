#include <iostream>
#include <climits>
using namespace std;

void selectionSort(int a[], int size) {
	for (int j = 0; j < size - 1; j++) {
		int minNum = a[j];
		int minIndex = j;
		for (int i = j + 1; i < size; i++) {
			if (a[i] < minNum) {
				minNum = a[i];
				minIndex = i;
			}
		}
		a[minIndex] = a[j];
		a[j] = minNum;
	}
}

int main() {
	int a[] = {3,2,5,4,9,6,1};
	selectionSort(a, 7);
	for (int i = 0; i < 7; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

