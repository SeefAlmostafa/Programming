#pragma once
#include "Haus.h"

class Mietshaus : public Haus {
private:
	unsigned int p_qm;
public:
	Mietshaus(float, float, unsigned int);
	void set_preis(unsigned int);
	unsigned int get_preis();
	float mietpreis();
};