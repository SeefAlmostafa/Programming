

#include "Immobilie.h"


Immobilie::Immobilie() :Immobilie("", 1, 0.0, 0.0, 0.0, 0.0) {}

Immobilie::Immobilie(string owner, int type, double x1, double x2, double y1, double y2) {
	intit(owner, type, x1, x2, y1, y2);
}

void Immobilie::intit(string owner, int type, double x1, double x2, double y1, double y2) {
	set_owner(owner);
	set_type(type);
	set_E1(x1, x2);
	set_E2(x1, x2);
}


Immobilie::~Immobilie() {
	cout << "Immobilie\t destroyed" << endl;
}

void Immobilie::set_E1(double x1, double x2) {
	this->E1[0] = x1;
	this->E1[1] = x2;
}

void Immobilie::set_E2(double y1, double y2) {
	this->E2[0] = y1;
	this->E2[1] = y2;
}

double* Immobilie::get_E1() const {
	return (double*)E1;
}

double* Immobilie::get_E2() const {
	return (double*)E2;
}

void Immobilie::set_owner(string owner) {
	this->owner = owner;
}

string Immobilie::get_owner() const {
	return owner;
}

void Immobilie::set_type(int type) {
	this->type = type;
}

int Immobilie::get_type() const {
	return type;
}

double Immobilie::wohnfleache() {
	return (E1[0] + E1[1]) * (E2[0] + E2[1]);
}