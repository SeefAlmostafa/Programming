
#include "Baugrundstueck.h"


int main(){

	Baugrundstueck G(2, 1, 1, 2, 100);

	float* E1 = G.get_Ecke1();
	float* E2 = G.get_Ecke2();

	cout << "Ecke1   " << E1[0] << " " << E1[1] << endl;
	cout << "Ecke2   " << E2[0] << " " << E2[1] << endl;
	cout << "Flaeche  : " << G.Flaeche() << endl;
	cout << "Preis/qm : " << G.get_preis() << endl;
	cout << "Kaufpreis: " << G.kaufpreis() << endl;

	cin.ignore();

	G.set_Ecke1(0, 0);

	cout << "Ecke1   " << E1[0] << " " << E1[1] << endl;
	cout << "Ecke2   " << E2[0] << " " << E2[1] << endl;
	cout << "Flaeche  : " << G.Flaeche() << endl;
	cout << "Preis/qm : " << G.get_preis() << endl;
	cout << "Kaufpreis: " << G.kaufpreis() << endl;

	cin.ignore();

	Baugrundstueck G1(-1, -1, 1, 1,1);
	E1 = G1.get_Ecke1();
	E2 = G1.get_Ecke2();

	cout << "Ecke1   " << E1[0] << " " << E1[1] << endl;
	cout << "Ecke2   " << E2[0] << " " << E2[1] << endl;
	cout << "Flaeche  : " << G1.Flaeche() << endl;
	cout << "Preis/qm : " << G1.get_preis() << endl;
	cout << "Kaufpreis: " << G1.kaufpreis() << endl;

	cin.ignore();

	G1.set_preis(150);
	cout << "Flaeche  : " << G1.Flaeche() << endl;
	cout << "Preis/qm : " << G1.get_preis() << endl;
	cout << "Kaufpreis: " << G1.kaufpreis() << endl;

	return 0;
}

/*
	Ecke1   2 1
	Ecke2   1 2
	Flaeche  : 1
	Preis/qm : 100
	Kaufpreis: 100

	Ecke1   0 0
	Ecke2   1 2
	Flaeche  : 2
	Preis/qm : 100
	Kaufpreis: 200

	Ecke1   -1 -1
	Ecke2   1 1
	Flaeche  : 4
	Preis/qm : 1
	Kaufpreis: 4

	Flaeche  : 4
	Preis/qm : 150
	Kaufpreis: 600

*/