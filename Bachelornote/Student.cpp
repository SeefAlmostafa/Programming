
#include "Student.h"

void Student::destroy() {
	cout << "Der Student:" << get_full_name()
		<< " mit der ID = " << get_serial()
		<< " wurde geloecht" << endl;
}

Student::Student(unsigned int matrNr, string vorname, string nachname, string addresse)
	:Mitglied(vorname, nachname, addresse) {
	this->matrNr = matrNr;
}

void Student::set_matrNr(unsigned int matrNr = 0) { this->matrNr = matrNr; }

Student::Student(): matrNr(0), Mitglied() {}

Student::~Student() { destroy(); }

unsigned int Student::get_matrNr() { return matrNr; }

void Student::print() {
	cout << "MatriklNummer:\t\t" << get_matrNr() << endl;
	Mitglied::print();

}

void Student::add_module(Module& m) {
	module.push_back(&m);
}

void Student::add_modules(list<Module*>& m) {
	for (auto& module : m) {
		add_module(*module);
	}
}