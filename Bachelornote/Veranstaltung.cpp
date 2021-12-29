
#include "Veranstaltung.h"
#include <list>

Veranstaltung::Veranstaltung(string vl_name) {
	this->name = vl_name;
	serial = ID++;
}
Veranstaltung::Veranstaltung() :Veranstaltung("") {}

void Veranstaltung::destroy() {
	cout << "Die Veranstaltung:" << get_name()
		<< "mit der ID: " << get_serial()
		<< " wurde geloecht" << endl;
}
Veranstaltung::~Veranstaltung() { destroy(); }

void Veranstaltung::set_name(string name) { this->name = name; }
string Veranstaltung::get_name() { return name; }
unsigned int Veranstaltung::get_serial() { return serial; }
unsigned int Veranstaltung::ID = 1;