#pragma once

using namespace std;
#include <iostream>
#include <string>

enum ImmobilieType { Wohnung = 1, Haus };

class Immobilie {
private:
	string owner;
	int type;
	double E1[2]; // flaeche 
	double E2[2]; // flaeche 

public:
	Immobilie();
	Immobilie(string, int,double,double, double, double);

	void intit(string, int, double, double, double, double);
	~Immobilie();

	void set_E1(double, double);
	void set_E2(double, double);
	void set_owner(string owner);
	void set_type(int type);

	double* get_E1() const;
	double* get_E2() const;
	string get_owner() const;
	int get_type() const;

	double wohnfleache();
};