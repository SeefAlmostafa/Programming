#include "MotorCar.h"

MotorCar::MotorCar():MotorCar(0,0,"name","sr",0,"fuelSn") {}

MotorCar::MotorCar(int wt, int sp, char const* nm, char const* ser, int pow, char const* fuel) {
	setweight(wt);
	setspeed(sp);
	setname(nm);
	e = new Engine;
	e->setserial(ser);
	e->setpower(pow);
	e->setfueltype(fuel);
}

MotorCar::~MotorCar() {
	delete[] e;
}