
#include "Mietwohnung.h"

Mietwohnung::Mietwohnung():Mietwohnung("",Wohnung,0.0,0.0,0.0,0.0,1) {}

Mietwohnung::Mietwohnung(string owner, int type, double x1, double x2, double y1, double y2, unsigned int m_qm) :Immobilie(owner, type = Wohnung, x1, x2, y1, y2) {
	set_miete(m_qm);
}

Mietwohnung::~Mietwohnung() {
	cout << "Mietwohnung\t destroyed" << endl;
}

void Mietwohnung::set_miete(unsigned int m_qm) {
	this->m_qm = m_qm;
}

unsigned int Mietwohnung::get_miete() {
	return m_qm;
}

double Mietwohnung::kaltmiete() {
	return (wohnfleache() * m_qm);
}

double Mietwohnung::warmmiete() {
	return kaltmiete() + ((kaltmiete() / 100) * 30);
}