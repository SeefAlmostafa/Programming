
#include "Professor.h"

void Professor::destroy() {
	cout << "Der Professor: " << get_full_name()
		<< " mit der ID = " << get_serial()
		<< " wurde geloecht" << endl;

	auto it = vl.begin();
	for (; it != vl.end(); it++) {
		delete *it;
	}
}

Professor::Professor(string vorname,string name, int fachbereich):Mitglied(vorname,name) {
	this->fachbereich = fachbereich;
}
Professor::Professor() :Professor("","", unbewusst) {}

Professor::~Professor() { destroy(); }
int Professor::get_Fachbereich() { return fachbereich; }

void Professor::print() {
	if (get_Fachbereich() == 1) {
		cout << "Fachbereich:\t\tUmweltpalnnung Umwelttechnik" << endl;
	}
	else if (get_Fachbereich() == 2) {
		cout << "Fachbereich:\t\tUmweltwirtschaft Umweltrecht" << endl;
	}
	else {
		cout << "Fachbereich:\t\tUnbekannt" << endl;
	}
	Mitglied::print();
}

void Professor::add_veranstaltung(Veranstaltung& v) {
	vl.push_back(&v);
}

void Professor::add_veranstaltungen(list< Veranstaltung*>& v) {
	for (auto& veranstaltung : v) {
		add_veranstaltung(*veranstaltung);
	}
}