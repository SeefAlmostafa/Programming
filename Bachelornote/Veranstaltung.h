#pragma once
using namespace std;
#include <iostream>
#include <string>

class Veranstaltung {
private:
	string name;
	unsigned int serial;
	static unsigned int ID;
	void destroy();
public:
	Veranstaltung(string vl_name);
	Veranstaltung();
	~Veranstaltung();
	void set_name(string);
	string get_name();
	unsigned int get_serial();
};