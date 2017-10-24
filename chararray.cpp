#include <iostream>
using namespace std;

int length(char in[]) {
	int i = 0;
	while (in[i] != '\0') {
		i++;
	}
	return i;
}

bool isPal(char in[]) {
	int l = length(in);
	int s = 0;
	int e = l - 1;
	while (s < e) {
		if (in[s] != in[e]) {
			return false;
		}
		s++;
		e--;
	}
	return true;
}

void substring(char in[], int si, int ei, char out[]) {

}

void printAllSubstrings(char in[]) {

}

void removeConsecutiveDuplicates(char in[]) {

}


int main() {
	char arr[] = {'a','b','c'};
	cout << arr << endl;

	char in[100];
	cin >> in;
	cout << in;
}
