
#include <iostream>

int main(){
	/*
			1	  				 2				
	--------------  ------------------------------ 
    String::String& operator=(const String& other){
		 if(this!= other) // 3
		{ 
		delete[] Str; // 4
		 str = strdop(other.str); // 5
		}
		 return *this;

	}
	*/


	/*
	erkl�ren Sie die bestandteile (was machte die n�chsten Zeilen)
	1) Die Funktion hat ein datentyp string& und ist mit string :: verbunden, damit der Linker wei� welche Methode bzw von welcher Klasse aufzurufen.
	2) die zuweisungoperator nimmmt ein konstante String& other, die sich nicht ver�ndern darf, operator= -> (=)
	3) 3 ist wichtig damit wir selbstzerst�rung vermeiden
	4) erstmal wird die alte str gel�scht bevor wir ein Refrenz als Parameter zuweisen   
	5) zun�chst wird die string von other zu dem string von this zugewissen (die string wird ein other string vom parameter bekommen !)
	*/
}


