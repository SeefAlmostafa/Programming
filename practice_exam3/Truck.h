#pragma once
#include <iostream>
using namespace std;
#include "Auto.h"

class Truck : public Auto
{
private:
	int trailer_weight;
public:
	Truck();
	Truck(int engine_wt, int sp,char const* nm, int trailer_wt);
	void setweight(int engine_wt,int trailer_wt);
	int getweight() const;
};