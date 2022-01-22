#pragma once
using namespace std;
#include <iostream>
#include "vehicle.h"
#include <cstring>

class VStorage{
private:
	Vehicle** storage;
	int nstored, current;

public:
	VStorage();
	VStorage(VStorage const& other);
	~VStorage();
	VStorage& operator=(VStorage const& other);
	void add(Vehicle const* vp); 	
	Vehicle *getfirst() const;
	Vehicle *getnext() const;
};