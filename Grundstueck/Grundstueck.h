#pragma once

#include<iostream>
using namespace std;

class Grundstueck {
private:
	float Ecke1[2];
	float Ecke2[2];
public:
	Grundstueck(float x1 = 0, float y1 = 0,
		float x2 = 0, float y2 = 0);
	float* const get_Ecke1();
	float* const get_Ecke2();
	void set_Ecke1(float, float);
	void set_Ecke2(float, float);
	float Flaeche();
};