using namespace std;
#include <iostream>

void print(int* a,int n) {
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int b[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = 10;
    for (int i = 0; i < n - 1; i++) {
        a[i + 1] = a[i] + a[i + 1];
        b[i + 1] = b[i] * b[i + 1];
    }
    print(a,n);
    print(b,n);
}

