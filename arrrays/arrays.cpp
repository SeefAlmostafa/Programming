using namespace std;
#include <iostream>
#define n 5  // length of the arrays

// function to print arrays
void printArray(int* arr) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// function to read arrays
void readArray(int* arr) {
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i + 1 << "]:";
        cin >> arr[i];
    }
    cout << "\n\n";
}

// function to do simple operations on arrays [ +,- ,*,/]
int* array_math(int* arr1, int* arr2, char op) {
    int* result_Array = new int[n];

    switch (op) {
        case '+':
            for (int i = 0; i < n; i++) {
                result_Array[i] = arr1[i] + arr2[i];
            }
            break;

        case '-':
            for (int i = 0; i < n; i++) {
                result_Array[i] = arr1[i] - arr2[i];
            }
            break;
        case '*':
            for (int i = 0; i < n; i++) {
                result_Array[i] = arr1[i] * arr2[i];
            }
            break;
        case '/':
            for (int i = 0; i < n; i++) {
                result_Array[i] = arr1[i] / arr2[i];
            }
            break;
        default:
            cout << "invalid operation" << endl;
    }

    return result_Array;
}

// main function
int main() {
    // arrays on the stack
    int arr1[n], arr2[n];

    // input of the arrays
    cout << "\nEnter the Elements of arr1:" << endl;
    readArray(arr1);
    cout << "\nEnter the Elements of arr2:" << endl;
    readArray(arr2);

    // sum arrays [+]
    int* arr3 = array_math(arr1, arr2, '+');  // heap array

    // print all arrays
    cout << "arr1:\t";
    printArray(arr1);
    cout << "arr2:\t";
    printArray(arr2);
    cout << "arr3:\t";
    printArray(arr3);
    cout << "\n\n\n";

    // mul arrays [*]
    int* arr4 = array_math(arr1, arr2, '*');  // heap array

    // print all arrays
    cout << "arr1:\t";
    printArray(arr1);
    cout << "arr2:\t";
    printArray(arr2);
    cout << "arr4:\t";
    printArray(arr4);

    // delete the arrays from the heap memory
    delete[] arr3;
    arr3 = nullptr;
    delete[] arr4;
    arr4 = nullptr;

    system("pause");
    return 0;
}