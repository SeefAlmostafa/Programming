#include "Auto.h"

Auto::Auto() {
	setweight(0);
	setspeed(0);
	name = new char[strlen("Name") + 1];          //new char[];
	strcpy(name, "Name");                        //name = "Name";
}

Auto::Auto(int wt, int sp, char const* nm) {
	name = new char[strlen(nm) + 1];
	strcpy(name, nm);
}

Auto::Auto(Auto const& other) {
	name = _strdup(other.name);
}

Auto::~Auto() {
	delete[]name;
}

Auto& Auto::operator=(Auto const& other) {
	cout << "\nInfo >>> Aufruf: Überladener Zuweisungsoperator\n" << endl;
	// Selbstzerstörung verhindern
	if (this != &other)
	{
		// eigene Daten deallokieren
		delete[] name;

		// Daten der Person other duplizieren
		name = _strdup(other.name);
	}
	// Rückgabe des aktuellen Objekts
	return *this;
}

char const* Auto::getname() const {
	return name;
}

void Auto::setname(char const* nm) {
	name = new char[strlen(nm) + 1];        //name = new char();
	strcpy(name, nm);                      //name = nm;
}