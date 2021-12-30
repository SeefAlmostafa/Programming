
using namespace std;
#include <iostream>


class A {
private:
	int* val;
public:
	A(int v) {
		cout << "A Constructor" << endl;
		this->val = new int;
		*val = v;
	}
	~A() {
		cout << "A Destructor" << endl;
		delete val;
		val = nullptr;
	}

	void set_val(const int* v) {
		*val = *v;
	}

	 const int* get_val() const {
		return val;
	}

	 void print() {
		 cout << "val:" << *val << endl;
	 }
};

int main() {
	//const after the function get means that we 
	// can create const objects and access get() by them
	//const A a3(15);
	//a3.get_val();

	A a1(10);
	A a2(20);

	a2.set_val(a1.get_val());

	a1.print();
	a2.print();

	return 0;

}
