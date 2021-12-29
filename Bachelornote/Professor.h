#pragma once
#include "Veranstaltung.h"
#include <list>
#include "Mitglied.h"

enum Fachbereich { Umweltpalnnung_Umwelttechnik = 1, Umweltwirtschaft_Umweltrecht, unbewusst };

class Professor:public Mitglied {
private:
	int fachbereich;
	void destroy();
protected:
	list <Veranstaltung*> vl;
public:
	Professor(string vorname,string name, int fachbereich);
	Professor();
	~Professor();
	int get_Fachbereich();
	void print();
	void add_veranstaltung(Veranstaltung&);
	void add_veranstaltungen(list< Veranstaltung*>&);

};