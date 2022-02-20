using namespace std;
#include <iostream>

int main() {
    int arr[] = {2, 4, 5, 7, 9, 7, 4};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "Array : ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << "  ";
    }

    cout << "\nRepeated Numbers are : ";

    for (int i = 0; i < len; i++)
        for (int j = i + 1; j < len; j++)
            if (arr[i] == arr[j]) {
                cout << arr[i] << "  ";
            }
}
