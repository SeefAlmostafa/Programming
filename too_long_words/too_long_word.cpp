using namespace std;
#include <iostream>
#include <string>

int main() {
    int i = 0;
    int n, t;
    cin >> n;
    t = n;

    string word;
    string save[n];

    while (n > 0) {
        // word = "";
        int len = 0;
        cin >> word;
        len = word.size();
        if (len > 10) {
            save[i] = string(word[0] + to_string(len - 2) + word[len - 1]);

        } else {
            save[i] = word;
        }
        i++;
        n--;
    }

    for (i = 0; i < t; i++) {
        cout << save[i] << endl;
    }

    return 0;
}

/*
    input:
    4
    word
    localization
    internationalization
    pneumonoultramicroscopicsilicovolcanoconiosis

    output:
    word
    l10n
    i18n
    p43s

 */