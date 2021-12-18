
using namespace std;
#include <iostream>

class B {
	friend void f(B, int c);
private:
	int x;
public:
	B() { x = 22; }
	void print() const {
		cout << x << endl;
	}
};

void f(B t, int c) {
	t.x = c;	 // t.x = 55 a copy from b is taken
}

int main()
{
	B b;		 // b.x = 22
	f(b, 55);    // Call by value
	b.print();   // x = 22
}

