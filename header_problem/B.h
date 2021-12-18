#pragma once
#include "A.h"

class A; // Vorwaertsdeklaration
class B {
private:
	int b_Val;
	friend class A;
public:
	B();
	void machWasMitA(A* a);
	void eineBMethode() const;
};