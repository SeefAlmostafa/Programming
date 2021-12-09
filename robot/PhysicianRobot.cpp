
#include "PhysicianRobot.h"

PhysicianRobot::PhysicianRobot(){}
PhysicianRobot::PhysicianRobot(string name,int health_level):Robot(name, health_level){}

void PhysicianRobot::heal(Robot& Py_rp) {
	if (!Py_rp.is_healthy()) {
		cout << Py_rp.get_name() << " will be healed" << endl;
		Py_rp.set_health(100);
	}
}

void PhysicianRobot::introduce() {
	cout << "I am the Robot:" << this->get_name() << endl;
}