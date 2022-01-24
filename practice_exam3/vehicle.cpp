
#include "vehicle.h"

Vehicle::Vehicle():Vehicle(0){}

Vehicle::Vehicle(int wt) {
	setweight(wt);
}

int Vehicle::getweight()const {
	return weight;
}

void Vehicle::setweight(int wt) {
	this->weight = wt;
}