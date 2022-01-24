#pragma once
using namespace std;
#include <iostream>
#include "vehicle.h"
#include <cstring>

class VStorage{
private:
	Vehicle** storage;
	int index;
	int nstored;
	int current;
	void copy(const VStorage& other);
	void destroy() const;
public:
	VStorage();
	VStorage(VStorage const& other);
	~VStorage();
	VStorage& operator=(VStorage const& other);
	void add(Vehicle const* vp); 	
	Vehicle *getfirst();
	Vehicle* getend() const;

	Vehicle *getnext();
};