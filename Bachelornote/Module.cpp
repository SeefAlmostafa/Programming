
#include "Module.h"

Module::Module(string module_name) {
	this->module_name = module_name;
	m_serial = ID++;
}

Module::~Module() {
	destroy();
}
void Module::set_module_name(string name) { this->module_name = name; }
string Module::get_module_name() { return module_name; }
unsigned int Module::get_m_serial() { return m_serial; }

void Module::destroy() {
	cout << "Das Module: " << get_module_name()
		<< " mit der ID = " << get_m_serial()
		<< " wurde geloecht" << endl;
}

unsigned int Module::ID = 1;