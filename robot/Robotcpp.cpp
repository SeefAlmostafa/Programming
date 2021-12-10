
#include "Robot.h"
const string msg = "Parameter Error: n2 > 0";

Robot::Robot() {
	this->name = "";
	this->health_level = 0;
}

Robot::Robot(string name) {
	this->name = name;
	this->health_level = 0;
}

Robot::Robot(string name, int health_level) {
	this->name = name;
	this->health_level = health_level;
}

void Robot::say_hi(string name) {
	cout << "Hello " << name << endl;
}

void Robot::introduce() {
	cout << "I am the Robot:" << this->name << endl;
}

// freind function to the class Robot
void setValue(double& n1, double& n2, char& op) {
	cout << "Enter first number:";
	cin >> n1;
	cout << "Enter second number:";
	cin >> n2;
	cout << "Enter op[+ / * -]:";
	cin >> op;
}

double Robot::calculate(double n1, double n2, char op) {
	double result = 0.0;

	setValue(n1, n2, op);

	if (is_healthy()) {

		switch (op) {
			case'+':result = n1 + n2;	break;
			case'-':result = n1 - n2;	break;
			case'*':result = n1 * n2;	break;
			case'/':(n2 == 0.0) ? throw msg : result = n1 / n2; break;
			default:result = -1;
		}
		return result;
	}
	return result;
}

bool Robot::is_healthy() {
	return health_level > 50;
}

void Robot::set_health(int health_level) {
	this->health_level = health_level;
}

int Robot::get_health() {
	return this->health_level;
}

void Robot::set_name(string name) {
	this->name = name;
}

string Robot::get_name() {
	return this->name;
}

