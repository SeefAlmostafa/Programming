#include "Miethaus.h"

Mietshaus::Mietshaus(float qmE0 = 0, float qmE1 = 0, unsigned int p_qm = 1.0) : Haus(qmE0, qmE1) {
	this->p_qm = p_qm;
}

void Mietshaus::set_preis(unsigned int p_qm) { this->p_qm = p_qm; }

unsigned int Mietshaus::get_preis() { return p_qm; }

float Mietshaus::mietpreis() { return (Flaeche() * p_qm); }