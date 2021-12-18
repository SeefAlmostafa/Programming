#include "A.h"
#include "B.h"

A::A() { a_Val = 0; }

void A::benutzeB(B* b) {
	b->b_Val = b->b_Val + 1;
	std::cout << "b_Val:" << b->b_Val << std::endl;
}
void A::eineAMethode() {
	std::cout << "A methode is called " << std::endl;
}