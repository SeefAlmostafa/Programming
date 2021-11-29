
#include <iostream>
using namespace std;

void BubbleSort(int arr[], int len);
void printArray(int* arr, int len);
void Swap(int arr[], int i, int j);

int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int len = sizeof(arr) / sizeof(arr[0]);

	cout << "Before Sorting:\t";
	printArray(arr, len);

	BubbleSort(arr, len); // Sort the Array

	cout << "After Sorting:\t";
	printArray(arr, len);
}

void BubbleSort(int arr[], int len) {
	for (int i = len; i > 0; i--) {
		for (int j = 0; j < i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				Swap(arr, j, j + 1);
			}
		}
	}
}

void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Swap(int arr[], int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[i + 1];
	arr[i + 1] = temp;
}
