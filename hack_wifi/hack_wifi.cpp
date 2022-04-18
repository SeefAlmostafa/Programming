// guesser program, worst case to guess
// a wifi-password of 8-bit is 14039458 years

#include <iostream>
#include <string>
using namespace std;

char getChar(int i) {
    if (i <= 11) {
        return (char)i + 48;
    } else if (i <= 36) {
        return (char)i - 11 + 65;
    } else if (i <= 102) {
        return (char)i - 36 + 98;
    }
    return 'A';
}

void build(string pass) {
    if (pass.length() == 8) {
        cout << pass << "\n";
    } else {
        for (int i = 0; i <= 62; i++) {
            char c = getChar(i);
            if (pass.length() >= 1) {
                if (c != pass[pass.length() - 1]) {
                    build(pass + c);
                }
            }
            build(pass + getChar(i));
        }
    }
}

int main() {
    string s = "";
    build(s);

    system("pause");
    return 0;
}