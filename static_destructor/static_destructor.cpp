
using namespace std;
#include <iostream>

class Employee {
private:
	string name;
public:
	Employee(string name) :name(name) {
		cout << "Constructor " << name << "\n";
	}

	~Employee() {
		cout << "Destructor " << name << "\n";
	}
};

int main(){

	static Employee belal("belal");
	Employee most("Mostafa");

	if (true) {
		Employee mona("Mona");
	} // Notice: when the end of scope,the Destructor will be called
	 //  Think of the object's life time

	static Employee Asmaa("Asmaa");
	return 0;

}
/*
	Constructor's call are the easy part.
	For destructor, Think in the object's life time
	- Static object ends ONLY with the end of the program.
	- So every static member ends only after complete end of program life time
	- If there are more than static, destruction in reverse order
	- For local objects, once its scope is done
	- Notice mona's scope ends after the if, but most ends after return 0

	Output:

	Constructor belal
	Constructor Mostafa
	Constructor Mona
	Destructor Mona
	Constructor Asmaa
	Destructor Mostafa
	Destructor Asmaa
	Destructor belal

*/
