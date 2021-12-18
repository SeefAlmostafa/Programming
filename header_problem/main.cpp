
using namespace std;
#include <iostream>
#include "A.h"
#include "B.h"

int main() {
	A a;				// a_val = 0
	B b;				// b_val = 0 

	a.benutzeB(&b);		// b_val = 1 
	b.machWasMitA(&a);	// a_val = 1 
}