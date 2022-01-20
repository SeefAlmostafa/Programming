#pragma once

#include<iostream>
using namespace std;

class Haus {
private:
	float qm[2];
public:
	Haus(float qmE0 = 0, float qmE1 = 0);
	float get_qm_E0();
	float get_qm_E1();
	void set_qm_E0(float);
	void set_qm_E1(float);
	float Flaeche();
};

