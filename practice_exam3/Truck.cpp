#include "Truck.h"

Truck::Truck() {
	setweight(0, 0);
}

Truck::Truck(int engine_wt, int sp, char const* nm, int trailer_wt):Auto(engine_wt,sp,nm) {
	this->trailer_weight = trailer_wt;
}

void Truck::setweight(int engine_wt, int trailer_wt) {
	weight = engine_wt;
	this->trailer_weight = trailer_wt;
}

int Truck::getweight() const {
	return (Auto::getweight() + trailer_weight);
		// Gewicht von Motorwagen plus Anhänger
}