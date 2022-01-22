#pragma once
#include <iostream>
using namespace std;
#include "Auto.h"
#include "Engine.h"

class MotorCar : public Auto{
private:
	Engine* e;
public:
	MotorCar();
	MotorCar(int wt, int sp, char const* nm,char const* ser, int pow,char const* fuel);
	~MotorCar();
};

