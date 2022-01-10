using namespace std;
#include <iostream>

class A {
private:
	int x = 12;
public:
	A() {
		cout << "A Constructor called" << endl;
	}

	~A() {
		cout << "A Destructor called" << endl;
	}

	void set_x(int x) { this->x = x; }
	int get_x() const  { return x; }
};


class B {
private:
	A* a;
public:

	B() {
		cout << "B Constructor called" << endl;
		a = new A;
		cout << a->get_x() << endl;
	}

	~B() {
		cout << "B Destructor called" << endl;
		delete a;
		a = nullptr;
	}
};

int main(){

	B b;

	return 0;
}

