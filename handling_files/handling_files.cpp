using namespace std;
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#define PATH "handling_files/data/data.txt"
enum class options { ADD = 1,
                     VIEW = 2 };

vector<string> Read_From_File(string filePath) {
    vector<string> lines;
    string line;
    try {
        ifstream myfile(filePath);
        if (myfile.is_open()) {
            while (getline(myfile, line)) {
                lines.push_back(line);
            }
            myfile.close();
        } else {
            cerr << "unable to open file\n";
        }
    } catch (exception& e) {
        cout << "Standard exception: " << e.what() << endl;
    }
    return lines;
}

void Write_to_File(string text, string filePath) {
    try {
        ofstream myfile;
        myfile.open(filePath, ios::out | ios::app);
        myfile << text + "\n";
        myfile.close();
        cout << "\nrecord is added to file\n";
    } catch (exception& e) {
        cout << "-> standard exception: " << e.what() << endl;
    }
}

void handle_file() {
    string text;
    int option;
    while (true) {
        cout << "(1).. Add new Record\n";
        cout << "(2).. View records\n";
        cout << "(3).. Hit Any other key to exit\n";
        cout << "Please enter an option:";
        cin >> option;
        if (option == (int)options::ADD) {
            cout << "Enter Text:";
            cin >> ws;  // clean spaces
            getline(cin, text);
            Write_to_File(text, PATH);
        } else if (option == (int)options::VIEW) {
            vector<string> fileLines = Read_From_File(PATH);
            cout << "\n----File Content------" << endl;
            for (auto line = fileLines.begin(); line != fileLines.end(); line++) {
                cout << *line << endl;
            }
            cout << "\n\n";
        } else {
            break;
        }
    }
}

int main() {
    handle_file();
    return 0;
}