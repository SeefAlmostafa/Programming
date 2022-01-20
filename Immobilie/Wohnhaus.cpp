
#include "Wohnhaus.h"

Wohnhaus::Wohnhaus() :Wohnhaus("", Wohnung, 0.0, 0.0, 0.0, 0.0, 1) {}

Wohnhaus::Wohnhaus(string owner, int type, double x1, double x2, double y1, double y2, unsigned int p_qm) : Immobilie(owner, type = Wohnung, x1, x2, y1, y2) {
	set_price(p_qm);
}

void Wohnhaus::set_price(unsigned int p_qm) {
	this->p_qm = p_qm;
}

Wohnhaus::~Wohnhaus() {
	cout << "Wohnung\t\t destroyed" << endl;
}


unsigned int Wohnhaus::get_price() {
	return p_qm;
}

double Wohnhaus::kaufpreis() {
	return wohnfleache() * get_price();
}