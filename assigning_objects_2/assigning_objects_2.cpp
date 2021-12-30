using namespace std;
#include <iostream>

class Mynumber {
private:
    int* val1;
    int val2;
public:
    Mynumber(int x = 3, int y = 5) {
        val1 = new int;
        *val1 = x;
        val2 = y;
    }

    ~Mynumber() {
         delete val1;
         val1 = nullptr;
    }

    Mynumber(const Mynumber& other) {
        cout << "Copy Constructor called" << endl;
        val1 = new int;
        *val1 = *other.val1;
        val2 = other.val2;
    }

    void printValuesAndAddress() {
        cout << "val1:" << *val1 << " " << val1 << endl;
        cout << "val2:" << val2 << " " << &val2 << endl << endl;
    }
};

void func1(Mynumber x) {
    // ...
}

Mynumber func2() {
    Mynumber e(1, 2);
    return e;
}

int main() {

    Mynumber a;         // normal Constructor
    Mynumber b(3, 4);   // normal Constructor

    Mynumber c(b);      // Copy Constructor to build c
    Mynumber d = b;     // Copy Constructor to initialize in declaration 
    func1(c);           // Copy Constructor to pass Object
    func2();            // Copy Constructor to retrun Object
    cout << "\n";

    //a = b;            // assignment not Copy Constructor

    a.printValuesAndAddress();
    b.printValuesAndAddress(); 
    c.printValuesAndAddress();
    d.printValuesAndAddress();

    return 0;
}

/*
    Copy Constructor called
    Copy Constructor called
    Copy Constructor called
    Copy Constructor called

    val1:3 000001BEFA89F550
    val2:5 00000091AE1EF7A0

    val1:3 000001BEFA8A1020
    val2:4 00000091AE1EF7D0

    val1:3 000001BEFA8954E0
    val2:4 00000091AE1EF800

    val1:3 000001BEFA895520
    val2:4 00000091AE1EF830
*/