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

void play1(Mynumber a) {}
void play2(Mynumber &a) {}
void play3(const Mynumber& a) {}

 Mynumber play4() {
    Mynumber x(1, 1);
    return x; // retured Object is temporary 
}

int main() {

    // temporary Object: an object that does not have a name
    // Main rule: cannot be bound to a non-const reference


    play1(Mynumber());

    // play2(Mynumber()); // can not be bound to non-const reference

    play3(Mynumber());

    // play2(play4());   //  can not be bound to non-const reference

    // Notice: sometimes that Copy Constroktor will not be called 
    // Due to c++ return optimization (RVO) 
    // it eliminates the temporary object created to hold a function's return value 
    return 0;
}
