
#include <string>
#include <iostream>
using namespace std;

void findTriplets(int arr[], int n) {
	bool found = false;
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (arr[i] + arr[j] + arr[k] == 0) {
					cout <<
						arr[i] << " " <<
						arr[j] << " " <<
						arr[k] << " " << endl;
					found = true;
				}
			}
		}
	}
	if (found == false) {
		cout << " not exist " << endl;
	}
}

int main() {

	// A simple C++ program to find three elements
	// whose sum is equal to zero

	int arr[5] = { 0, -1, 2, -3, 1 }; // given array
	int n = sizeof(arr) / sizeof(arr[0]);

	findTriplets(arr, n);

	system("pause");
	return 0;
}

/*
	Output:
	0 - 1 1
	2 - 3 1
*/
