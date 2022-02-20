using namespace std;
#include <iostream>
#include <string>

int main() {
    int i = 0;
    int n;

    cout << "-------||Input||-------" << endl;
    cin >> n;
    const int t = n;

    string word;

    // allocate an array of strings in the heap
    string* save = new string[t];

    while (n > 0) {
        // word = "";
        size_t len = 0;
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

    cout << "\n-------||Output||-------" << endl;

    for (i = 0; i < t; i++) {
        cout << save[i] << endl;
    }

    // free the memory that was allocated
    delete[] save;
    save = nullptr;

    return 0;
}

/*
        -------||Input||-------
        4
        word
        localization
        internationalization
        pneumonoultramicroscopicsilicovolcanoconiosis

        -------||Output||-------
        word
        l10n
        i18n
        p43s

 */
