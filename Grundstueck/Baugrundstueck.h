#pragma once
#include "Grundstueck.h"


class Baugrundstueck : public Grundstueck {
private:
	unsigned int p_qm;

public:
	Baugrundstueck(float, float, float, float, unsigned int);

	void set_preis(unsigned int);

	unsigned int get_preis();

	float kaufpreis();
};