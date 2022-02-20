using namespace std;
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>

int readLength() {
    int len = 0;
    cout << "Enter length:";
    cin >> len;
    if (len % 2 == 0) {
        throw(const char*) "Even Numbers are invalid";
    }
    return len;
}

void printArray(int* arr, int len) {
    cout << "\n";
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            cout << arr[j * len + i] << "  ";
        }
        cout << "\n";
    }
    cout << "\n\n";
}

void generateArray(int* arr, int len) {
    // position in the array starts from 0-24
    int xPos;
    int yPos;
    do {
        xPos = rand() % len;
        yPos = rand() % len;

    } while (xPos == (len / 2) && yPos == (len / 2));
    arr[xPos * len + yPos] = 1;
}

int get_Path(int* arr, int len) {
    int path = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (arr[j * len + i] == 1) {
                path = (abs(i - (len / 2))) + abs(j - (len / 2));
                break;
            }
        }
    }
    return path;
}

int main() {
    try {
        int path = 0;
        srand(time(NULL));
        const int len = readLength();

        int* arr = new int[len * len]{0};

        generateArray(arr, len);
        path = get_Path(arr, len);
        printArray(arr, len);

        cout << "Path = " << path << endl;

        delete[] arr;
        arr = nullptr;

    } catch (const char* e) {
        cout << e << endl;
    }

    return 0;
}