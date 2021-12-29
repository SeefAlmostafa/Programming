#pragma once
#include "Veranstaltung.h"
#include<list>

class Module {
private:
	string module_name;
	unsigned int m_serial;
	list<Veranstaltung*> vl;
	static unsigned int ID;
	void destroy();
public:
	Module(string module_name);
	~Module();
	void set_module_name(string);
	string get_module_name();
	unsigned int get_m_serial();
};
