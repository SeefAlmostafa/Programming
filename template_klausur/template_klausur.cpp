
using namespace std;
#include <iostream>

/*

int produkt(int i, int faktor = 100, int j = 2) {
	int ergebnis = 1;
	for (int k = i; k < j; k++) {
		ergebnis *= faktor;
	}
	return ergebnis;
}

int main(){
	// cout << produkt() << endl; // nicht korrekt, weil i nicht al parameter übergegeben wurde !
	cout << produkt(1) << endl; // 100
	cout << produkt(1,1) << endl; // 1
	cout << produkt(1, 1,1) << endl; // 1
	// cout << produkt(1, 1, 1, 1) << endl; // Falsch weil produkt(p1,p2,p3) nur drei Parameter hat
	return 0;
}

*/


template<class T>
T produkt(int i, T faktor, int j) {
	// kann float,double,int zurückgeben
	T ergebinis = 1
	for (int k = i; k < j; k++) {
		ergebinis *= faktor;
	}
	return ergebinis;
}


int main(){

	// erzeugen Sie eine Template funktion produkt von ohne Defaultwerte 
	// der Faktor und die Rückgabewert sollen als Template sein 


	int i = 1;
	float f = 0.5f;
	double d = 5e3;

	cout << produkt(1, i, 2) << endl; // 1
	cout << produkt(1, f, 2) << endl; // 0.5
	cout << produkt(1, d, 2) << endl; // 5.0000000

	return 0;
}


