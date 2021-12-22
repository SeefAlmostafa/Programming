
/*
Einfache bedingungueberdeckung:
                                   startkapital < 10000             kundenPrio == 1        startkapital > 50000            kundenPrio == 3
startkapital:9999, kundenPrio:3    false						     true		           true							   false
startkapital:60000,kundenPrio:1    true						         false			       false	               		   true



Mehrfachbedingungueberdeckung:

											startkapital < 10000			kundenPrio == 1			startkapital > 50000			kundenPrio == 3
startkapital:9999, kundenPrio:3				false						     true		            true							false
startkapital:60000,kundenPrio:1				true						     false			      	false	               			true
startkapital:9999, kundenPrio:1				true			                 true			      	false							false
startkapital:60000,kundenPrio:3				false							 false					true							true



Minmale mehrfachbedingungueberdeckung


											startkapital < 10000			kundenPrio == 1			E1			startkapital > 50000			kundenPrio == 3			E2
startkapital:9999, kundenPrio:3				true			 				false	   				false		false     						true					true
startkapital:9999,kundenPrio:1				true			  			    true					true		false		 					false					false

*/
#include <iostream>
using namespace std;

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


	return 0;

	
}



/*

Einfache bedingungueberdeckung:
							   startkapital < 10000      		 kundenPrio == 1	      		     startkapital > 50000	         kundenPrio == 3
startkapital:9999, kundenPrio:3			                   true				      false			      		     false	               	     true
startkapital:60000,kundenPrio:1				           false			      true		             		     true	                     false


Mehrfachbedingungueberdeckung:
							   startkapital < 10000      		  kundenPrio == 1	       		      startkapital > 50000	   	 kundenPrio == 3
startkapital:9999, kundenPrio:3			                   true			 	      false			     		     false	                     true
startkapital:60000,kundenPrio:1				           false		              true		             		     true	                     false
startkapital:9999, kundenPrio:1				           true			              true			      		     false		             false
startkapital:60000,kundenPrio:3				           false			      false			     		     true		             true


Minmale mehrfachbedingungueberdeckung
							   startkapital < 10000        	   	  kundenPrio == 1	   	  E1	      startkapital > 50000	 	 kundenPrio == 3      	 E2
startkapital:9999, kundenPrio:3			                   true			 	       false	   		false		     false     		      	      true		true
startkapital:9999,kundenPrio:1				           true			  	       true		   	 true		     false		 	      false		false


*/









/*
Einfache bedingungueberdeckung:
											startkapital < 10000			kundenPrio == 1			startkapital > 50000			kundenPrio == 3
startkapital:9999, kundenPrio:3				false						     true		            true							false
startkapital:60000,kundenPrio:1				true						     false			        false	               			true



Mehrfachbedingungueberdeckung:

											startkapital < 10000			kundenPrio == 1			startkapital > 50000			kundenPrio == 3
startkapital:9999, kundenPrio:3				false						     true		            true							false
startkapital:60000,kundenPrio:1				true						     false			      	false	               			true
startkapital:9999, kundenPrio:1				true			                 true			      	false							false
startkapital:60000,kundenPrio:3				false							 false					true							true



Minmale mehrfachbedingungueberdeckung


											startkapital < 10000			kundenPrio == 1			E1			startkapital > 50000			kundenPrio == 3			E2
startkapital:9999, kundenPrio:3				true			 				false	   				false		false     						true					true
startkapital:9999,kundenPrio:1				true			  			    true					true		false		 					false					false

*/











