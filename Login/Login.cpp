
#include <iostream>
#include <string>
using namespace std;

// prototypes
void Login(string& Username, string& password);                       // call by reference
bool checkLogin(const string& myUsername, const string& myPassword);  // call by reference

// function 1
bool checkLogin(const string& myUsername, const string& myPassword) {
    /*
     we used const to ensure that the function checkLogin(..) will not
     change the data (myUsername,myPassword) when receiving it
     the function checkLogin(..) can read but not write something on the data
     const is a good practice in c++
     .
     .
     */
    bool input = (myUsername == "User027" && myPassword == "12345");

    if (input) {
        cout << "Login successed\n\n";
        return true;
    }

    else {
        cout << "Login failed\n\n";
        return false;
    }
}

// function 2
void Login(string& username, string& password) {
    // we did not use const here, because we want to change the data
    cout << "Enter your Username :";
    cin >> username;
    cout << "Enter your Password :";
    cin >> password;

    cout << "\n";
}

// main function
int main() {
    string username;
    string password;

    cout << "\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    cout << "  LOGIN TO FACEBOOK  ";
    cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";

    do {
        Login(username, password);              // please keep trying to login,
    } while (!checkLogin(username, password));  // while password is wrong

    return 0;
}
