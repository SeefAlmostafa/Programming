﻿/*
    this program should generate fake emails file,
    which will be sent to the hackers database who try to win
    some victims data from youtubers !
    Please notice that the goal of this Code is to learn and not to harm any other users..
*/
enum class choice { onScreen = 1,
                    onFile = 2,
};

#include "Scam.cpp"

int main() {
    Scam scam;
    // fake accounts will be generated by using fake names
    scam.Generate_Fake_Accounts(f_namesPath);

    int option;
    cout << "Enter [1 | 2] to display the data:";
    cin >> option;

    cout << "\n\n\n";

    if (option == (int)choice::onScreen) {
        scam.showfakeEmails();  // on screen
    }

    else if (option == (int)choice::onFile) {
        scam.wrtieFakeEmails(f_accountsPath);  // on a file
    }

    else {
        exit(-1);
    }

    system("pause");
    return 0;
}
