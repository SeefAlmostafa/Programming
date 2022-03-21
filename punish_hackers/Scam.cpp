#include "Scam.h"

Scam::Scam() { init(); }
Scam::~Scam() { cout << "Scam Process is Done !" << endl; }

void Scam::init() {
    srand(time(NULL));
    set_max();
    set_Mail();
}

void Scam::set_Mail() {
    this->Mail[0] = "@hotmail.com";
    this->Mail[1] = "@gmail.com";
    this->Mail[2] = "@yahoo.com";
}

string Scam::get_Mail(int index) {
    try {
        if (index < 0 || index > 3) {
            throw "Index is out of Range";
        }

    } catch (const char* msg) {
        cerr << msg << endl;
    }
    return Mail[index];
}

string Scam::get_Random_Mail() {
    int index = rand() % (int)mail_size;
    return get_Mail(index);
}

string Scam::randomPassword(int length = 12) {
    string newPassword;
    string possiblePassword = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int password_length = sizeof(possiblePassword) - 1;
    for (int i = 0; i < length; i++) {
        newPassword += (char)possiblePassword[rand() % password_length];
    }
    return newPassword;
}

void Scam::Read_from_file(const char* path) {
    string line, newMail, newPassword;
    ifstream file(path);
    if (file.is_open()) {
        while (getline(file, line)) {
            newPassword = randomPassword();
            newMail = (line + to_string(get_Random_Number()) + get_Random_Mail() + "\t\t\t\t\t\t\t\t\t\t\t\t" + newPassword);

            if (newMail.empty()) {
                break;
            } else {
                fakeEmails.push_back(newMail);
            }
        }
        file.close();

    } else {
        cout << "Unable to open file";
    }
}

void Scam::showfakeEmails() {
    auto it = fakeEmails.begin();
    for (; it != fakeEmails.end(); it++) {
        cout << *it << endl;
    }
    cout << endl;
}

void Scam::wrtieFakeEmails(const char* path) {
    write_to_file(path);
}

void Scam::write_to_file(const char* path) {
    ofstream file;
    file.open(path);

    for (int i = 0; i < fakeEmails.size(); ++i) {
        file << fakeEmails[i] << endl;
    }

    file.close();
}

void Scam::Generate_Fake_Accounts(const char* path) {
    Read_from_file(path);
}
