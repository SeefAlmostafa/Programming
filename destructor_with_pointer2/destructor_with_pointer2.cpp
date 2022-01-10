using namespace std;
#include <iostream>

class A {
private:
    int* x;
public:
    A() {
        cout << "A Constructor called" << endl;
        x = new int;
        *x = 10;
    }

    ~A() {
        cout << "A Destructor called" << endl;
        destroy(); // ok 
    }

    void destroy() {
        delete x;
        x = nullptr;
    }

    int* get_x() const { return x; }
};


class B {

public:
    A* a;

    B() {
        cout << "B Constructor called" << endl;
        a = new A;
        // destroy(); // Error because it is called in the Constructor
    }

    void destroy() {
        delete a;
        a = nullptr;
    }

    ~B() {
        cout << "B Destructor called" << endl;
        destroy(); // ok
    }
};

int main() {
    B b;

    cout<< *b.a->get_x() << endl; // ok x can be found in the heap

    return 0;
}