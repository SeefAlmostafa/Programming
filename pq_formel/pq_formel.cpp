#include <iostream>
using namespace std;
#include <math.h>

void pq_formel(float& p, float& q);

int main()
{
	float p = 0.0f, q = 0.0f;

	cout << "Geben Sie p ein:";
	cin >> p;
	cout << "Geben Sie q ein:";
	cin >> q;

	// berechne Gleichung
	pq_formel(p,q);


	system("pause");
	return 0;
}

void pq_formel(float& p, float& q) {

	float Delta = sqrt((pow(p / 2.0, 2)) - q); 

	// pq_formel
	float x1 = (-p / 2) + Delta;
	float x2 = (-p / 2) - Delta;

	if (Delta > 0.0f) {
		cout << "Es gibt Zwei Loesungen:" << "x1 = " << x1 << " x2 = " << x2 << endl;
	}
	else if (Delta == 0.0f) {
		cout << "Es gibt eine Loesung:" << x1 << endl;
	}
	else {
		cout << "Keine Loesung" << endl;
	}

}