
using namespace std;
#include <iostream>
#include <string>
#include <sstream>

class Invoice {
private:
	string name;
	int item_number;
	double price;
	int quantity;

public:
	Invoice();
	Invoice(const int&, const string&, const double&, const int&);
	void init();


	void set_name(string&);
	void set_price(double&);
	void set_item_number(int&);
	void set_quantity(int&);

	string& get_name();
	double& get_price();
	int& get_item_number();
	int& get_quantity();

	void print();
	double get_total_price();
	string To_string();

};

Invoice::Invoice() { init(); }

Invoice::Invoice(const int& item_number, const string& name, const double& price, const int& quantity = 1) {
	if (name.empty()) {
		cout << "This" << get_name() << " is empity" << endl;
		exit(-1);
	}
	else {
		this->name = name;
	}
	if (item_number <= 0) {
		cout << "This" << get_item_number() << " is invaild" << endl;
		exit(-1);
	}
	else {
		this->item_number = item_number;
	}

	if (quantity <= 0) {
		cout << "This" << get_quantity() << " is invaild" << endl;
	}
	else {
		this->quantity = quantity;
	}
	if (price <= 0) {
		cout << "This" << get_price() << " is invaild" << endl;
	}
	else {
		this->price = price;
	}

}
void Invoice::init() {
	this->name = "";
	this->item_number = 0;
	this->price = 0.0;
	this->quantity = 0;
}


void Invoice::set_name(string& name) {
	this->name = name;
}
void Invoice::set_price(double& price) {
	this->price = price;
}
void Invoice::set_item_number(int& item_number) {
	this->item_number = item_number;
}
void Invoice::set_quantity(int& quantity) {
	this->quantity = quantity;
}

string& Invoice::get_name() {
	return name;
}
int& Invoice::get_item_number() {
	return item_number;
}
double& Invoice::get_price() {
	return price;
}

int& Invoice::get_quantity() {
	return quantity;
}

void Invoice::print() {
	cout << "Item Name:\t" << get_name() << endl;
	cout << "item Number:\t" << get_item_number() << endl;
	cout << "Item price:\t" << get_price() << " $" << endl;
	cout << "Item Quantity:\t" << get_quantity() << endl;
	cout << "\n" << endl;
}

double Invoice::get_total_price() {
	return get_price() * get_quantity();
}


string Invoice::To_string() {
	ostringstream oss;
	oss << get_name() << "," << get_price() << "," << get_quantity() << "," << get_item_number() << endl;
	return oss.str();
}


int main() {

	Invoice iv(132352, "blue wellford Jacket", 419.00, 1);
	iv.print();

	string s = iv.To_string();
	cout << s;

	return 0;
}

