using namespace std;
#include <iostream>

int Binary_Search(int* arr, int item, int len);

int Binary_Search(int* arr, int item, int len) {
	int low = 0;
	int high = len - 1;
	int mid;
	int ans = -1;

	while (low <= high) {
		mid = (low + high) / 2;
		int guess = arr[mid];

		if (guess == item) {
			guess = ans = mid; // we used ans to avoid the usage of return 2 times in the function 
			break;
		}

		else if (guess > item) {
			high = mid - 1;
		}

		else {
			low = mid + 1;
		}
	}
	return ans;
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
				 15, 16, 17, 18, 19, 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 };

	int len = sizeof(arr) / sizeof(arr[0]);

	int item;
	cout << "Enter the item you are looking for:";
	cin >> item;

	int pos = Binary_Search(arr, item, len);

	cout << "Item Position:" << pos << endl;

	return 0;
}