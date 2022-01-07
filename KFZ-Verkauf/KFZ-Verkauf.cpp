
using namespace std;
#include <iostream>

double calculate_price(double ,double ,double ,int ,double );

int main(){
	double GesamtPreis = calculate_price(20000.00,3450.00,6000.00,3,10);
	cout << GesamtPreis << endl;
	return 0;
}


double calculate_price(double baseprice,double specialprice,double extraprice,int extras,double discount) {

	double Zubehoerrabatt = 0;
	bool Bedingung = extras == 3 || extras == 4;

	if (baseprice <= 0 || specialprice < 0 || extraprice < 0 || discount < 0) {
		baseprice = 0;	discount = 0;	specialprice = 0;	extraprice = 0;
	}

	Bedingung ? (discount = (10 * baseprice) / 100,  Zubehoerrabatt = (extraprice * 10) / 100) :
	(discount = (15 * baseprice) / 100, Zubehoerrabatt = (extraprice * 15) / 100);

	return (((baseprice - discount) + specialprice + extraprice)) - Zubehoerrabatt;
}