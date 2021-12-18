
#include "B.h"
#include "A.h"

B::B() { b_Val = 0; }

void B::machWasMitA(A* a) {
	a->a_Val = a->a_Val + 1;
	std::cout << "a_Val:" << a->a_Val << std::endl;
}

void B::eineBMethode() const {
	std::cout << "B methode is called" << std::endl;
}