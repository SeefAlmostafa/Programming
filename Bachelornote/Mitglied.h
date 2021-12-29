#pragma once

using namespace std;
#include<iostream>
#include <string>

class Mitglied {
private:
	string vorname;
	string nachname;
	string email;
	string addresse;
	unsigned int serial;
	static unsigned int ID;

protected:
	virtual void destroy() = 0;

public:
	Mitglied();
	Mitglied(string vorname, string nachname);
	Mitglied(string vorname, string nachname, string addresse);

	void set_email(string email);
	string get_full_name();
	string get_email();
	string get_vorname();
	string get_nachname();
	string get_addresse();
	void set_vorname(string);
	void set_addresse(string);
	void set_nachname(string);
	static int get_anzahl_personen();
	unsigned int get_serial();
	virtual void print();
};