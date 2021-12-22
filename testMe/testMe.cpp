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
