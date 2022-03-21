
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define f_namesPath "scam/names.txt"
#define f_accountsPath "scam/result/accounts.txt"
#define max_size 1000
#define mail_size 3

class Scam {
   private:
    int max;
    string Mail[mail_size];
    vector<string> fakeEmails;
    void Read_from_file(const char*);
    void write_to_file(const char*);

   public:
    Scam();
    ~Scam();

    inline void set_max(int max = 999) { this->max = max; }
    inline int get_max() const { return max; }
    inline int get_Random_Number() { return rand() % get_max() + 1; }

    void init();
    void set_Mail();
    string get_Mail(int);
    string get_Random_Mail();
    void showfakeEmails();
    void wrtieFakeEmails(const char* path);
    void Generate_Fake_Accounts(const char* path);
    string randomPassword(int);
};