#include <iostream>
#include <string>
#include <cstring>
#include "vehicle.h"
#include "land.h"
#include "auto.h"
#include "engine.h"
#include "motorcar.h"
#include "truck.h"
#include "vstorage.h"
using namespace std;


int main(){


	Land land(200, 20);    // weight 200, speed 20
	Land land2(45, 20);

	Auto auto1(1200, 130, "Ford"); // adresse:0000000C186FFC48
	// weight 1200, speed 130, marke Ford

	VStorage garage; // der Behälter
	// in den Behälter stecken

	garage.add(&land);
	garage.add(&land2);
	garage.add(&auto1);


	for(auto it = garage.getfirst();it!= garage.getend();it = garage.getnext()){
		cout <<"Addresse:" << it << "\t weight:" << it->getweight() << endl;
	}
	 

	return 0;
}

/*
	output:
	Addresse:0000019245ED54A0        weight:200
	Addresse:0000019245ED54E0        weight:45
	Addresse:0000019245ED5520        weight:1200
*/