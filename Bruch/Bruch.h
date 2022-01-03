#pragma once

#include <iostream>
#include <string>
using namespace std;

const string msg = "Nenner darf nicht 0 sein";

class Bruch {
private:
	int zaehler;
	int nenner;
	int GCD(int, int); // Greatest common divisor
	void getHauptnenner(Bruch&);
	int kgv();
	int ggt();
	Bruch kuerzen();  // impliziter Aufruf ! 

public:
	Bruch(int zeiler = 1, int nenner = 1);

	void setZaehler(int);
	void setNenner(int);

	int getZaehler()const;
	int getNenner()const;

	void init(int, int);

	Bruch umkehr();
	double toDouble();

	Bruch operator+(Bruch);
	const Bruch& operator+=(Bruch);

	Bruch operator-(Bruch b);
	const Bruch& operator-=(Bruch);

	Bruch operator*(Bruch);
	const Bruch& operator*=(Bruch);

	Bruch operator/(Bruch);
	const Bruch& operator/=(Bruch);

	friend ostream& operator<<(ostream& s, const Bruch z);

};
 ostream& operator<<(ostream& s, const Bruch z);