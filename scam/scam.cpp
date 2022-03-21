#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
    this program should generate fake emails,
    which will be sent to the hackers database who try to win
    some victims data from some youtubers !
    Please notice that the goal of this Code is to lean and not to harm any other users..
    i clarify here clearly that i am not responsible for any harming issues
*/

class Scam {
   private:
    int max;
    string Mail[3];
    vector<string> fakeEmails;

   public:
    Scam() { init(); }
    ~Scam() { cout << "Scam Process is Done !" << endl; }

    inline void set_max(int max = 9999) { this->max = max; }
    inline int get_max() const { return max; }

    void init() {
        set_max();
        set_Mail();
    }

    void set_Mail() {
        this->Mail[0] = "@Hotmail.com";
        this->Mail[1] = "@Gmail.com";
        this->Mail[2] = "@Yahoo.com";
    }

    string& get_Mail(int index) const {
    }

    void Read_from_file() {
    }

    void write_to_file() {
    }

    int get_Random_Number() {
        srand(time(NULL));
        int random_number = rand() % max + 1;
    }

    void Generate_Fake_Emails() {
    }
};

int main() {
    Scam scam;
    return 0;
}