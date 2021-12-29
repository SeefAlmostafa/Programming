#include "Hochschule.h"

void Hochschule::destroy() {
	auto stud = studenten.begin();
	for (; stud != studenten.end(); stud++) {
		delete * stud;
	}
	auto prof = Professoren.begin();
	for (; prof != Professoren.end(); prof++) {
		delete* prof;
	}
}

Hochschule::Hochschule(string name, string addresse, unsigned int anzahlStudierende) {
	this->name = name;
	this->serial = ID++;
	this->addresse = addresse;
	this->anzahlStudierende = anzahlStudierende;
}
Hochschule::Hochschule() :Hochschule("", "", 0) {}


Hochschule::~Hochschule() { destroy(); }

string Hochschule::get_h_name() { return name; }
unsigned int Hochschule::get_h_serial() { return serial; }


void Hochschule::add_student(Student& s) {
	this->studenten.push_back(&s);
}

void Hochschule::print_student_list() {
	cout << "\n------------STUDENTEN:" << endl;
	auto it = this->studenten.begin();
	for (; it != studenten.end(); it++) {
		(*it)->print();
	}
	cout << endl;
}

void Hochschule::print_Proffesor_list() {
	cout << "\n------------PROFESSOREN:" << endl;
	auto it = this->Professoren.begin();
	for (; it != Professoren.end(); it++) {
		(*it)->print();
	}
	cout << endl;
}

void Hochschule::add_students(list<Student*>& s) {
	for (auto &student : s) {
		add_student(*student);
	}
}

void Hochschule::add_Professor(Professor& p) {
	this->Professoren.push_back(&p);
}
void Hochschule::add_Professors(list<Professor*>& p) {
	for (auto& professor : p) {
		add_Professor(*professor);
	}
}

// veranstaltungen sind bei einer hochschule zu befinden 
// d.h ein Student oder ein Professor greifen die Vernastaltungen 
// mit Hilfe der Anmeldung zur Hochschule 


unsigned int Hochschule::ID = 1;