using namespace std;
#include <windows.h>

#include <iostream>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int k = 1; k < 16; k++) {
        SetConsoleTextAttribute(hConsole, k);
        cout << k << "- C++ is a fun language" << endl;
    }
    cout << "\n";
    system("pause");
}