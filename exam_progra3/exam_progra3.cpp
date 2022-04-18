using namespace std;
#include <iostream>

int product(int i, int vektor = 17, int j = 2) {
    int ergebnis = 1;
    for (int k = i; k < j; k++) {
        ergebnis *= vektor;
    }
    return ergebnis;
}

int main() {
    cout << product(1) << endl;           // 17
    cout << product(1, 1) << endl;        // 1
    cout << product(1, 1, 1000) << endl;  // 1
    // cout << product(1, 1, 1, 1) << endl;  // falsch weil 4 parameeters
    // cout << product() << endl;            // falsch weil i hat kein default wert

    system("pause");
    return 0;
}

// 10 punkte