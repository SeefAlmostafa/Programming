
using namespace std;
#include <iostream>
/*
	A constructor can call other member functions of the class,
	such as set or get functions,
	but because the constructor is initializing the object,
	the data members may not yet be initialized.
	Using data members before they have been properly initialized can cause logic errors

	see example:
*/

class SomeClass {
public:
	int x;
	void f();

	SomeClass() {
		this->f(); // call f() that has no value for x
		x = 1;
	}
};

void SomeClass::f() {
	int y = x;
	cout << y; // but X not initalized yet
}

int main() {
	SomeClass test;
	// y would have random value 
	// one fix is to put x = 1 before calling the f()
	return 0;
}