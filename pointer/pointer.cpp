using namespace std;
#include <iostream>

int main() {
    int ***ptr = new int **[3];  // 3D Array

    for (int i(0); i < 3; i++) {
        ptr[i] = new int *[3];
    }

    for (int i = 0; i < 3; i++) {
        for (int j(0); j < 3; j++)
            ptr[i][j] = new int[3];
    }

    for (int i = 0; i < 3; i++) {
        for (int j(0); j < 3; j++)
            for (int k(0); k < 3; k++)
                ptr[i][j][k] = k + 1;
    }

    for (int i = 0; i < 3; i++) {
        for (int j(0); j < 3; j++)
            for (int k(0); k < 3; k++)
                cout << "ptr[" << i << "][" << j << "][" << k << "]: " << ptr[i][j][k] << endl;
    }

    for (int i = 0; i < 3; i++) {
        for (int j(0); j < 3; j++) {
            delete[] ptr[i][j];
            ptr[i][j] = nullptr;
        }
        delete[] ptr[i];
        ptr[i] = nullptr;
    }
    delete[] ptr;
    ptr = nullptr;

    return 0;
}
