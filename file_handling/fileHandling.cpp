using namespace std;
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
    srand(time(NULL));
    int counter = 0;
    string word;
    vector<string> lines;
    ifstream file;
    file.open("file.txt");

    while (getline(file, word)) {
        counter++;
        lines.push_back(word);
    }

    int chosenWordNumber = rand() % counter;

    cout << lines[chosenWordNumber];

    file.close();
    return 0;
}