#pragma once
#include <iostream>
using namespace std;
#include "Land.h"
#include <cstring>

class Auto : public Land{
private:
	// Daten
	char* name;
public:
	// Standardkonstruktor
	Auto();
	// Überladener Konstruktor
	Auto(int wt, int sp, char const* nm);
	// Kopierkonstruktor
	Auto(Auto const& other);
	// Destruktor
	~Auto();
	// Zuweisungsoperator
	Auto& operator=(Auto const& other);
	// Zugriffsfunktionen
	char const* getname() const;
	void setname(char const* nm);
};
