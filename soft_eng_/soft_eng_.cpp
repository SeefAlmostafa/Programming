
#include <iostream>
using namespace std;
#include <string>


/*




*/


float bestimmeEndkapital(float startkapital, int kundenPrio)
{
	float aktKapital, endkapital;
	int laufzeit = 0;
	aktKapital = startkapital;
	while (laufzeit < 10)
	{
		if (startkapital < 10000 && kundenPrio == 1)
			aktKapital = 1.03 * aktKapital;
		else {
			aktKapital = 1.05 * aktKapital;
			if (startkapital > 50000 || kundenPrio == 3)
				aktKapital = aktKapital + 0.01 * startkapital;
		}
		laufzeit = laufzeit + 1;
	}
	endkapital = aktKapital;
	return endkapital;
}

int main() {
	float startkapital = 0.0;
	int kundenPrio = 0;

	cout << "Gib den startkapital ein:";
	cin >> startkapital;
	cout << "Gib den kundenPrio ein:";
	cin >> kundenPrio;

	float endkapital = bestimmeEndkapital(startkapital, kundenPrio);
	cout << "endkapital:" << endkapital << endl;



	string t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
	t1 = "Mehrfachbedingungueberdeckung:\n";
	t2 = "startkapital < 10000\t\tkundenPrio == 1\t\tstartkapital > 50000\tkundenPrio == 3\t\n";
	t5 = "true\t\t\t\tfalse\t\t\tfalse\t\t\ttrue\t\t\n";
	t6 = "true\t\t\t\ttrue\t\t\tfalse\t\t\tfalse\t\t\n";
	t7 = "true\t\t\t\tfalse\t\t\tfalse\t\t\tfalse\t\t\n";
	t8 = "true\t\t\t\ttrue\t\t\tfalse\t\t\tfalse\t\t\n";
	cout << t1 << t2  << t5 << t6<<t7<<t8;
}

/*

Einfache bedingungueberdeckung:
                                	startkapital < 10000                    kundenPrio == 1         startkapital > 50000            kundenPrio == 3	
startkapital:9999, kundenPrio:3		true                                    false                   false                           true
startkapital:60000,kundenPrio:1		false                                   true                    true                            false


Minmale mehrfachbedingungueberdeckung:
                               		startkapital < 10000            kundenPrio == 1         E1      startkapital > 50000    kundenPrio == 3         E2
startkapital:60000,kundenPrio:1		true                            false                   false   false                   false                   false
startkapital:9999,kundenPrio:3 		true                            true                    true    false                   false                   false

Mehrfachbedingungueberdeckung:
									startkapital < 10000            kundenPrio == 1         startkapital > 50000    kundenPrio == 3
									true                            false                   false                   true
									true                            true                    false                   false
									true                            false                   false                   false
									true                            true                    false                   false

*/




