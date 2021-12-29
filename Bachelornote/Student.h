#pragma once
#include "Module.h"
#include "Mitglied.h"

class Student:public Mitglied {
private:

	list<Module*> module;
	unsigned int matrNr;
	void destroy();

public:
	Student();
	Student(unsigned int matrNr, string vorname, string nachname, string addresse);
	~Student();
	unsigned int get_matrNr();
	void set_matrNr(unsigned int);
	void print();
	void add_module(Module&);
	void add_modules(list<Module*>&);
};
