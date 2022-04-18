using namespace std;
#include <iostream>
#include <string>

string reverse_words(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

int main() {
    cout << reverse_words("programming");
    cout << "\n";
    system("pause");
    return 0;
}