#include <iostream>
#include <climits>
using namespace std;

void rev(int a[], int size) {
	int b[100];
	int k = 0;
	for (int i = size -1; i >= 0; i--) {
		b[k] = a[i];
		k++;
	}
}

int sumArray(int a[], int size) {
	int ans = 0;
	for (int i = 0; i < size; i++) {
		ans = ans + a[i];
	}
	return ans;
}

void increment(int in[]) {
	cout << in << endl;
	in[1]++;
}

int main() {

	int arr[] = {1,2,3,4,5};
	int as[100] = {-1, 3};

	int arr1[10] = {1,2,3,4};

	// print
	rev(arr, 10);
	// print

	arr[0] = 0;
	cout << arr << endl;
	cout << arr[1] << endl;
	increment(arr);
	cout << arr[1] << endl;

	int inta;
	
	long int lint;

	short int sint;

	cout << sizeof(lint) << endl;
	cout << sizeof(sint) << endl;

	cout << sizeof(inta) << endl;
	cout << sizeof(int) << endl;

	int a[100];
	cout << a << endl;
	
	cout << sizeof(a)/sizeof(a[0]) << endl;
	int n;
	cout << "Enter num of elements" << endl;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}

	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	cout << max << endl;
	cout << sumArray(a, n) << endl;
}
