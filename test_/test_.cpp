#include <iostream>
using namespace std;
#include <string>
#define n 9

class Student {
   private:
    static int ID;
    string studentName;
    int serialNumber;
    float avg, sum;
    int module[n] = {0};

   public:
    // constructors
    Student(string studentName) {
        serialNumber = ++ID;
        avg = 0.0;
        sum = 0.0;
        set_studentName(studentName);
    }

    // destructor
    ~Student() {}

    // methods
    void set_studentName(string studentName) {
        this->studentName = studentName;
    }

    void enterMarks() {
        for (int i = 0; i < n; i++) {
            cout << "Enter your " << i + 1 << "-Mark:";
            cin >> module[i];
        }
    }

    void calculate_avg() {
        for (int i = 0; i < n; i++) {
            sum += module[i];
        }
        avg = sum / n;
    }

    float get_average() {
        return avg;
    }

    string get_studentName() const {
        return studentName;
    }

    int get_SerialNr() { return serialNumber; }

    void print() {
        cout << "\n\n";
        cout << "ID:" << get_SerialNr() << endl;
        cout << "Name:" << get_studentName() << endl;
        cout << "Avg:" << get_average() << endl;
        cout << "\n\n";
    }
};

// class variable
int Student::ID = 0;

int main() {
    // we have declared 2 objects
    Student s1("Ahmed"), s2("Mohammed");

    // first object
    s1.enterMarks();
    s1.calculate_avg();
    s1.print();

    // second object
    s2.enterMarks();
    s2.calculate_avg();
    s2.print();

    system("pause");
    return 0;
}