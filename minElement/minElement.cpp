using namespace std;
#include <cmath>
#include <iostream>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int absoluteValue(int a, int b) {
    if (a > b) {
        return a - b;
    } else {
        return b - a;
    }
}

void closestNumber(int arr[], int size, int element) {
    int difference = absoluteValue(arr[0], element);
    int result = arr[0];
    for (int i = 1; i < size; ++i) {
        if (difference > absoluteValue(arr[i], element)) {
            difference = absoluteValue(arr[i], element);
            result = arr[i];
        }
    }
    cout << "Closest of element " << element << " is " << result << endl;
}

int main() {
    int arr[] = {12, -1, 4, -3, 5, 8, 9, 11, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array element:\t");
    printArray(arr, size);
    closestNumber(arr, size, 0);
    system("pause");
    return 0;
}