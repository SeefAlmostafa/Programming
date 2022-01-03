
#include "Bruch.h"

Bruch::Bruch(int zeiler, int nenner) {
	init(zeiler, nenner);
}

void Bruch::init(int zaehler, int nenner) {
	setZaehler(zaehler);
	setNenner(nenner);
}

void Bruch::setZaehler(int zaehler) {
	this->zaehler = zaehler;
}

void Bruch::setNenner(int nenner) {
	if (nenner == 0) {
		cerr << msg << endl;
		nenner = 1;
	}
	else {
		this->nenner = nenner;
	}
}

int Bruch::getZaehler()const {
	return zaehler;
}

int Bruch::getNenner()const {
	return nenner;
}

int Bruch::GCD(int z, int n) {
	int erg = 0;
	n == 0 ? erg = z : erg = GCD(n, z % n);
	return erg;
}

int Bruch::kgv() {
	int g = ggt();
	int k = (nenner * zaehler) / g;

	return k;
}

int Bruch::ggt() {
	return GCD(nenner, zaehler);
}

Bruch Bruch::kuerzen() {
	int g = ggt();
	zaehler /= g;
	nenner /= g;
	return  *this;
}

Bruch Bruch::umkehr() {
	if (getZaehler() == 0) {
		cerr << msg << endl;
		return *this;
	}
	Bruch b = *this;

	b.nenner = zaehler;
	b.zaehler = nenner;
	return b;
	
}

double Bruch::toDouble() {
	return double(zaehler) / double(nenner);
}


void Bruch::getHauptnenner(Bruch& other) {
	Bruch b = Bruch(this->getNenner(), other.getNenner());

	int hauptnenner = b.kgv();

	int m1 = hauptnenner / this->getNenner();
	int m2 = hauptnenner / other.getNenner();

	this->zaehler *= m1;
	this->nenner = hauptnenner;
	other.zaehler *= m2;
	other.nenner = hauptnenner;

	return;
}

Bruch Bruch::operator+(Bruch z) {
	Bruch a = Bruch(*this);	
	Bruch b = Bruch(z);

	if (a.nenner != b.nenner)
		a.getHauptnenner(b);

	Bruch b_neu(a.zaehler + b.zaehler, a.nenner);

	return b_neu.kuerzen();
}

const Bruch& Bruch::operator+=(Bruch z) {
	Bruch b = Bruch(z);

	if (this->nenner != b.nenner)
		this->getHauptnenner(b);

	this->zaehler += b.zaehler;

	return this->kuerzen();
}

Bruch Bruch::operator-(Bruch z) {
	Bruch a = Bruch(*this);
	Bruch b = Bruch(z);

	if (a.nenner != b.nenner)
		a.getHauptnenner(b);

	Bruch b_neu(a.zaehler - b.zaehler, a.nenner);

	return b_neu.kuerzen();
}

const Bruch& Bruch::operator-=(Bruch z) {
	Bruch b = Bruch(z);	

	if (this->nenner != b.nenner)
		this->getHauptnenner(b);

	this->zaehler -= b.zaehler;

	return this->kuerzen();
}

Bruch Bruch::operator*(Bruch z) {
	int z_neu = this->zaehler * z.zaehler;
	int n_neu = this->nenner * z.nenner;

	Bruch b(z_neu, n_neu);
	return b.kuerzen();
}

const Bruch& Bruch::operator*=(Bruch z) {
	this->zaehler *= z.zaehler;
	this->nenner *= z.nenner;

	return this->kuerzen();
}

Bruch Bruch::operator/(Bruch z) {
	int z_neu = this->zaehler * z.nenner;
	int n_neu = this->nenner * z.zaehler;

	Bruch b(z_neu, n_neu);
	return b.kuerzen();
}

const Bruch& Bruch::operator/=(Bruch z) {
	this->zaehler *= z.nenner;
	this->nenner *= z.zaehler;

	return this->kuerzen();
}

ostream& operator<<(ostream& s, const Bruch z) {
	return s << z.zaehler << "/" << z.nenner;
}