#pragma once
using namespace std;
#include <iostream>
#include <string>

class Robot {
private:
	string name;
	int health_level;
protected:
	friend void setValue(double&, double&, char&);
public:
	Robot();
	Robot(string name);
	Robot(string name, int health_level);
	void say_hi(string name);
	void introduce();
	void set_health(int health_level);
	int get_health();
	void set_name(string name);
	string get_name();
	double calculate(double n1, double n2, char op);
	bool is_healthy();
};