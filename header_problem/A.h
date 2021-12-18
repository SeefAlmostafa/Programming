#pragma once
#include "B.h"
#include<iostream>

class B; // Vorwaertsdeklaration
class A {
private:
	int a_Val;
	friend class B;
public:
	A();
	void benutzeB(B* b);
	void eineAMethode();
};