using namespace std;
#include <iostream>

class A {
public:
	A() { cout << "A Constructor" << endl; }
	~A(){ cout << "A Destructor" << endl; }
};


class B {
public:
	B() { cout << "B Constructor" << endl; }
	~B(){ cout << "B Destructor" << endl; }
};


class C {
public:
	C() { cout << "C Constructor" << endl; }
	~C(){ cout << "C Destructor" << endl; }
};


class D {
private:
	A a;
	B b;
	C c;
public:
	D() :b(B()), a(A()), c(C()) { cout << "D Constructor\n"; }

	~D() { cout << "D Destructor" << endl; }
};


int main() {
	D d;

	return 0;
}

/*
A Constructor
B Constructor
C Constructor
D Constructor
D Destructor
C Destructor
B Destructor
A Destructor
*/

//From results: 
//Constructors are called based on Class data members order
//NOT initalizer list order