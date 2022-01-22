#include "Engine.h"

Engine::Engine() {
	serial_number = new char[strlen("sn") + 1];
	strcpy(serial_number, "sn");
	fuel_type = new char[strlen("ftype") + 1];
	strcpy(fuel_type, "ftype");
	power = 0;
}

Engine::Engine(char const* serial_nr, int power, char const* fuel_typ) {
	serial_number = new char[strlen(serial_nr)];
	strcpy(serial_number, serial_nr);
	fuel_type = new char[strlen(fuel_typ)];
	strcpy(fuel_type, fuel_typ);
	this->power = power;
}

Engine::~Engine() {
	delete[] serial_number;
	delete[] fuel_type;
}

Engine::Engine(Engine const& other) {
	serial_number = _strdup(other.serial_number);
	fuel_type = _strdup(other.fuel_type);
}

Engine& Engine::operator=(Engine const& other) {
	cout << "\nInfo >>> Aufruf: Überladener Zuweisungsoperator\n" << endl;
	// Selbstzerstörung verhindern
	if (this != &other)
	{
		// eigene Daten deallokieren
		delete[] serial_number;
		delete[] fuel_type;

		// Daten der Person other duplizieren
		serial_number = _strdup(other.serial_number);
		fuel_type = _strdup(other.fuel_type);
	}
	// Rückgabe des aktuellen Objekts
	return *this;
}

void Engine::setserial(char const* serial_nr) {
	//serial_number = serial_nr;

	serial_number = new char[strlen(serial_nr)];
	strcpy(serial_number, serial_nr);

}

void Engine::setpower(int power) {
	this->power = power;
}

void Engine::setfueltype(char const* type) {
	//fuel_type = type;

	fuel_type = new char[strlen(type)];
	strcpy(fuel_type, type);
}

char const* Engine::getserial() const {
	return serial_number;
}

int Engine::getpower() const {
	return power;
}

char const* Engine::getfueltype() const {
	return fuel_type;
}