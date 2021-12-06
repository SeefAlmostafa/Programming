
using namespace std;
#include <iostream>


void ZaehleZchn(int&, int&);
void ZaehleZchn(int& VokalAnzahl, int& Gesamtzahl) {
	char Zchn;
	cin >> Zchn;

	while ((Zchn >= 'A') && (Zchn <= 'Z') && (Gesamtzahl < INT_MAX))
	{
		if ((Zchn == 'A') || (Zchn == 'E') ||
			(Zchn == 'I') || (Zchn == 'O') ||
			(Zchn == 'U'))
		{
			VokalAnzahl = VokalAnzahl + 1;
		}
		Gesamtzahl = Gesamtzahl + 1;
		cin >> Zchn;
	}
	cout << "VokalAnzahl:" << VokalAnzahl << endl;
}

int main() {

	int VokalAnzahl = 0;

	int Gesamtzahl = 2147483645; // Test fall 1: INT_MAX = 2147483647

	ZaehleZchn(VokalAnzahl, Gesamtzahl);

	system("pause");
	return 0;
}
