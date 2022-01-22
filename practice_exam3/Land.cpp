#include "Land.h"

Land::Land() {
	setweight(0);
	setspeed(0);
}

Land::Land(int wt, int sp):Vehicle(wt),speed(sp) {}

void Land::setspeed(int sp) {
	this->speed = sp;
}

int Land::getspeed() const {
	return speed;
}