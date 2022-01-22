#pragma once
#include <iostream>
using namespace std;
#include <cstring>

class Engine{
private:
	char* serial_number, * fuel_type;
	int power;
public:

	Engine();
	Engine(char const* serial_nr, int power,char const* fuel_type);
	~Engine(); 
	Engine(Engine const& other); 
	Engine& operator=(Engine const& other);

	void setserial(char const* serial_nr);
	void setpower(int power);
	void setfueltype(char const* type);
	char const* getserial() const;
	int getpower() const;
	char const* getfueltype() const;
};
