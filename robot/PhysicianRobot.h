#pragma once
#include "Robot.h"
class PhysicianRobot:public Robot {

public:
	PhysicianRobot();
	PhysicianRobot(string name, int health_level);
	void heal(Robot&);
	virtual void introduce();
};