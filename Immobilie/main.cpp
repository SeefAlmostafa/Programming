#include "Mietwohnung.h"
using namespace std;

int main() {

	Wohnhaus* W = new Wohnhaus("Seef Almostafa", Wohnung, 2, 1, 1, 2, 100);
	double* E1 = W->get_E1();
	double* E2 = W->get_E2();

	cout << "Owner:\t\t" << W->get_owner() << endl;
	cout << "Type:\t\t" << W->get_type() << endl;
	cout << "Eckpunkt1:\t" << E1[0] << " " << E1[1] << endl;
	cout << "Eckpunkt2:\t" << E2[0] << " " << E2[1] << endl;
	cout << "Wohnflaeche:\t" << W->wohnfleache() << endl;
	cout << "Preis/qm :\t" << W->get_price() << endl;
	cout << "Kaufpreis:\t" << W->kaufpreis() << endl;

	Mietwohnung* M = new Mietwohnung("Seef Almostafa", Wohnung, 2, 1, 1, 2, 120);
	double* E3 = M->get_E1();
	double* E4 = M->get_E2();
	cout << "\n\n";


	cout << "Owner:\t\t" << M->get_owner() << endl;
	cout << "Type:\t\t" << M->get_type() << endl;
	cout << "Eckpunkt1:\t" << E1[0] << " " << E1[1] << endl;
	cout << "Eckpunkt2:\t" << E2[0] << " " << E2[1] << endl;
	cout << "Wohnflaeche:\t" << M->wohnfleache() << endl;
	cout << "Miete/qm :\t" << M->get_miete() << endl;
	cout << "Kaltmiete:\t" << M->kaltmiete() << endl;
	cout << "Warmmiete:\t" << M->warmmiete() << endl;

	cout << "\n\n";
	delete W;
	W = nullptr;
	delete M;
	M = nullptr;

	return 0;
}

/*
	Owner:          Seef Almostafa
	Type:           1
	Eckpunkt1:      2 1
	Eckpunkt2:      2 1
	Wohnflaeche:    9
	Preis/qm :      100
	Kaufpreis:      900


	Owner:          Seef Almostafa
	Type:           1
	Eckpunkt1:      2 1
	Eckpunkt2:      2 1
	Wohnflaeche:    9
	Miete/qm :      120
	Kaltmiete:      1080
	Warmmiete:      1404


	Wohnung          destroyed
	Immobilie        destroyed
	Mietwohnung      destroyed
	Immobilie        destroyed
*/