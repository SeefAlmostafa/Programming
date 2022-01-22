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



Land veh(1200, 145);

int main()
{
	cout << "Vehicle weights "
		<< veh.getweight()	 //Methode von Vehicle
		<< endl
		<< "Speed is "
		<< veh.getspeed()    //Methode von Land
		<< endl;

	Land land(200, 20);    // weight 200, speed 20

	Auto auto1(1200, 130, "Ford");
	// weight 1200, speed 130, marke Ford

	return 0;
}