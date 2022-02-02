
using namespace std;
#include <iostream>

double calculate_price(double baseprice, double specialprice, double extraprice, int extras, double discount);
double calculate_price(double baseprice, double specialprice, double extraprice, int extras, double discount = 0.0) {
	
	double cashDiscount = 0.0, Zubehoerrabatt = 0.0;

	if (baseprice <= 0.0 || specialprice < 0.0 || extraprice < 0.0 || discount < 0.0) {
		baseprice = 0.0;	discount = 0.0;	specialprice = 0.0;	extraprice = 0.0;
	}

	if (extras > 0 && extras < 5) {
		discount = 10.0;
		cashDiscount = (discount * baseprice) / 100;
		Zubehoerrabatt = (extraprice * discount) / 100;
	}

	else if(extras >= 5) {
		discount = 15.0;
		cashDiscount = (discount * baseprice) / 100;
		Zubehoerrabatt = (extraprice * discount) / 100;
	}

	else{
		 cout << "extras kann nicht kleiner oder gleich 0 sein !" << endl;
		 discount = 0.0;
	 }

	return (((baseprice - cashDiscount) + specialprice + extraprice)) - Zubehoerrabatt;
}


int main(){

	// Discount wurde hier nicht übergeben, es wird automatisch berechnet & bestimmt
	// bessere Lösung !
	double GesamtPreis = calculate_price(20000.00,3450.00,6000.00,3);

	cout << GesamtPreis << endl;
	return 0;
}
