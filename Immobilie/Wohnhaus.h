#pragma once
#include "Immobilie.h"

class Wohnhaus :public Immobilie {
private:
	unsigned int p_qm;

public:
	Wohnhaus();
	Wohnhaus(string, int, double, double, double, double, unsigned int);
	~Wohnhaus();
	void set_price(unsigned int);
	unsigned int get_price();
	double kaufpreis();
};