

// in c++ gibt es DatenTypenprüfuung ? 
// die vererbunf hat ein enthält-beziehung? 
//Wenn zur Übersetzungszeit (also vom Compiler) festgelegt wird, welche Funktion einer Klasse aufzurufen ist,
//dann wird dies dynamisches/spätes Binden genannt ?
// Die frühe Bindung  einer Funktion ist Laufzeit-effizienter als die späte Bindung

//Wenn zur Übersetzungszeit(also vom Compiler) festgelegt wird, welche Funktion einer Klasse aufzurufen ist, 
//dann wird dies dynamisches / spätes Binden genannt
// Was ist ein Referenz ?
// Erläutern Sie kurz, was eine Initialisierungsliste ist und wie sie verwendet wird.In welchen Fällen ist eine Initialisierungsliste zwingend notwendig ?

// 
// letzte Aufgabe mit 20 Punkte Über PersonalVerwaltung 
// z.B zwei Unterschiedliche Personen -> meistens ist die Basisklasse als abstruct klasse

#include <iostream>
using namespace std;

void tausche_i(int& a, int& b) {
	int c;
	c = a;
	a = b;
	b = c;
}

void tausche_i(int* a, int* b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
}



int main() {

	// Wichtig: gehe davon aus dass die Addresse von ap ist 1000 und b ist 1001 
	// die Frage wie sind die werte Frage für a,b,ap,bp in position 1,2 und 3 ? 
	// Klausur Trick: man muss beachten dass ap und bp sind pointers, vondaher ihre Wert sind nur Addresse :D 


	int a = 11;
	int b = 47;
	int* ap = &a; // 1000  (gehen wir davon aus dass die wert von ap ist die Addresse 1000 )
	int* bp = &b; // 1001  (gehen wir davon aus dass die wert von ap ist die Addresse 1001 )

	// position 1
	cout << "a:" << &a << "\tb:" << &b << endl << endl;
	cout << " position 1:\t" << "a:" << a << "\t" << "b:" << b << "\t" << "ap:" << ap << "\t" << "bp:" << bp << "\t" << endl << endl;

	// position 2
	tausche_i(a, b);
	cout << " position 2:\t" << "a:" << a << "\t" << "b:" << b << "\t" << "ap:" << ap << "\t" << "bp:" << bp << "\t" << endl << endl;

	// position 3
	tausche_i(ap, bp);
	cout << " position 3:\t" << "a:" << a << "\t" << "b:" << b << "\t" << "ap:" << ap << "\t" << "bp:" << bp << "\t" << endl << endl;



	return 0;

}

/*

Ausgabe

 position 1:    a:11    b:47    ap:1000     bp:1001

 position 2:    a:47    b:11    ap:1000     bp:1001

 position 3:    a:11    b:47    ap:1000     bp:1001

 d.h die Addressen werden nie ausgetauscht !

*/