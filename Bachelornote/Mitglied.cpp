#include "Mitglied.h"

unsigned int Mitglied::ID = 1;

Mitglied::Mitglied() :Mitglied("", "", "") {}

Mitglied::Mitglied(string vorname, string nachname, string addresse) {
	this->vorname = vorname;
	this->nachname = nachname;
	this->addresse = addresse;
	serial = ID++;
}

Mitglied::Mitglied(string vorname, string nachname) :Mitglied(vorname, nachname, " ") {}

void Mitglied::set_vorname(string vorname) { this->vorname = vorname; }
void Mitglied::set_addresse(string addresse) { this->addresse = addresse; }
void Mitglied::set_nachname(string nachname) { this->nachname = nachname; }
void Mitglied::set_email(string email) { this->email = email; }
string Mitglied::get_full_name() { return vorname + " " + nachname; }
string Mitglied::get_email() { return email; }
string Mitglied::get_vorname() { return vorname; }
string Mitglied::get_nachname() { return nachname; }
string Mitglied::get_addresse() { return addresse; }
unsigned int Mitglied::get_serial() { return serial; }

void Mitglied::print() {
	cout << "Serial Nummer:\t\t" << serial << endl;
	cout << "Vorname\t\t\t" << vorname << endl;
	cout << "Nachname:\t\t" << nachname << endl;
	cout << "Addresse:\t\t" << addresse << endl;
	cout << "Email:\t\t\t" << email << endl;
	cout << "\n\n";
}

int Mitglied::get_anzahl_personen() {
	return ID - 1;
}
