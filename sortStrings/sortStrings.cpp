
using namespace std;
#include <cstring>
#include <iostream>
#include <string>
#define n 5

void sortStrings(string names[]) {
    string temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(names[j].c_str(), names[j + 1].c_str()) > 0) {
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

int main() {
    string names[n];
    cout << "Enter the names:" << endl;

    for (int i = 0; i < n; i++)
        getline(cin, names[i]);

    sortStrings(names);

    for (int i = 0; i < n; i++)
        cout << names[i] << " " << endl;

    system("pause");
    return 0;
}