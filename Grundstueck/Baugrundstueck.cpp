#include "Baugrundstueck.h"


Baugrundstueck::Baugrundstueck(float x1 = 0, float y1 = 0, float x2 = 0, float y2 = 0, unsigned int p_qm = 1.0) : Grundstueck(x1, y1, x2, y2) {
	this->p_qm = p_qm;
}

void Baugrundstueck::set_preis(unsigned int p_qm) { this->p_qm = p_qm; }

unsigned int Baugrundstueck::get_preis() { return p_qm; }

float Baugrundstueck::kaufpreis() { return (Flaeche() * p_qm); }