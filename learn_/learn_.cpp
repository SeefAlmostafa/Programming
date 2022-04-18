using namespace std;
#include <iostream>

class A {
   private:
    static int ID;
    int serialNumber;  // class variable
    int x;

   public:
    A() {
        serialNumber = ++ID;
        cout << "I am Object " << serialNumber << endl;
    }

    ~A() {
        cout << " Object " << serialNumber << " was deleted" << endl;
    }

    void set_x(int x) { this->x = x; }
    int get_x() { return this->x; }
};

int A::ID = 0;

A a1;    // global variable
A a4;    // global variable
A a[3];  // {ob0,ob1,ob2} -> con -> des

void func() {
    A a2;
}

int main() {
    func();
    A a3;  // local variable
    A x[3];
    system("pause");
    return 0;
}

/*
I am Object 1
I am Object 2
Object 2 was deleted
I am Object 3
Object 3 was deleted
Object 1 was deleted

*/