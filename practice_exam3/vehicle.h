#pragma once
#include <iostream>
using namespace std;

class Vehicle{
protected:
	int weight;
public:
	Vehicle();
	Vehicle(int wt);
	int getweight() const;
	void setweight(int wt);
};
