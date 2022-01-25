
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
	erklären Sie die bestandteile (was machte die nächsten Zeilen)
	1) Die Funktion hat ein datentyp string& und ist mit string :: verbunden, damit der Linker weiß welche Methode bzw von welcher Klasse aufzurufen.
	2) die zuweisungoperator nimmmt ein konstante String& other, die sich nicht verändern darf, operator= -> (=)
	3) 3 ist wichtig damit wir selbstzerstörung vermeiden
	4) erstmal wird die alte str gelöscht bevor wir ein Refrenz als Parameter zuweisen   
	5) zunächst wird die string von other zu dem string von this zugewissen (die string wird ein other string vom parameter bekommen !)
	*/
}


