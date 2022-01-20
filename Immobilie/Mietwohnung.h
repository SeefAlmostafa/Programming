#pragma once
#include "Wohnhaus.h"

class Mietwohnung :public Immobilie {

private:
	unsigned int m_qm;

public:
	Mietwohnung();
	Mietwohnung(string, int, double, double, double, double, unsigned int);
	~Mietwohnung();
	void set_miete(unsigned int);
	unsigned int get_miete();
	double kaltmiete();
	double warmmiete();
};