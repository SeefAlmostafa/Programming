#include "Haus.h"

Haus::Haus(float qmE0, float qmE1){
	qm[0] = qmE0;
	qm[1] = qmE1;
}

float Haus::get_qm_E0() { return qm[0]; }
float Haus::get_qm_E1() { return qm[1]; }

void Haus::set_qm_E0(float qm){
	this->qm[0] = qm;
}

void Haus::set_qm_E1(float qm){
	this->qm[1] = qm;
}

float Haus::Flaeche(){
	return qm[0] + qm[1];
}
