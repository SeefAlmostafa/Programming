#pragma once
#include <iostream>
using namespace std;
#include "vehicle.h"

class Land : public Vehicle
{
private:
	int speed;
public:
	Land();
	Land(int wt, int sp);
	void setspeed(int sp);
	int getspeed() const;
};




