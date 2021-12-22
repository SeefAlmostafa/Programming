
using namespace std;
#include <iostream>
#include <string>

class Manufacturing {
private:
	string manufacturing_company;
	string manufacturing_location;
public:
	Manufacturing() {
		manufacturing_company = "";
		manufacturing_location = "";
	}
	Manufacturing(string manufacturing_company, string manufacturing_location) {
		this->manufacturing_company = manufacturing_company;
		this->manufacturing_location = manufacturing_location;
	}

	// Set functions
	void set_manufacturing_company(string manufacturing_company) {
		this->manufacturing_company = manufacturing_company;
	}
	void set_manufacturing_location(string manufacturing_location) {
		this->manufacturing_location = manufacturing_location;
	}

	// Get functions
	string get_manufacturing_company() { return manufacturing_company; }
	string set_manufacturing_location() { return manufacturing_location; }

	void show_company_info() {
		cout << "c_name:\t\t" << manufacturing_company << endl;
		cout << "c_location:\t" << manufacturing_location << endl << endl;
	}
};

enum genration { first = 1, second, third, unknown };

class Smartphone {
private:
	string type;
	string model;
	int genration;
	int serialNumber;
	void copy(Smartphone const& other) {
		type = other.type;
		model = other.model;
		genration = other.genration;
		price = other.price;
		company = new Manufacturing(*other.company);
	}
	void destroy() { delete company; }
	double price;
	static int id;

protected:
	Manufacturing* company = new Manufacturing;

public:

	Smartphone() :Smartphone("", "", unknown, 0.0) {}
	Smartphone(string type, string model, int genration, double price) {
		this->serialNumber = id++;
		this->type = type;
		this->model = model;
		this->genration = genration;
		this->price = price;
	}
	Smartphone(Smartphone const& other) {
		copy(other);
	}

	Smartphone& operator=(Smartphone const& other) {
		if (this != &other) {
			destroy();
			copy(other);
		}
		return *this;
	}

	~Smartphone() {
		cout << type << "\twith the follwing" << "\tID =" << get_serialNumber() << "\tis destroyed\n";
		destroy();
	}

	// Get functions
	string get_type() { return type; }
	int get_genration() { return genration; }
	int get_serialNumber() { return serialNumber; }
	string get_model() { return model; }
	double get_price() { return price; }


	// pure functions 
	virtual void show_info() = 0;
	virtual void Take_A_Selfie() = 0;
	virtual void MakeACall() = 0;

};

int Smartphone::id = 1;

class Nokia :public Smartphone {
public:
	Nokia(string type, string model, int genration, double price) :
		Smartphone(type, model, genration, price) {
		company->set_manufacturing_company("Nokia");
		company->set_manufacturing_location("china");
	}
	virtual void  show_info() {
		cout << "NOKIA INFO" << endl;
		cout << "ID:\t\t" << get_serialNumber() << endl;
		cout << "type:\t\t" << get_type() << endl;
		if (get_genration() == 1) {
			cout << "genration:\t" << "first" << endl;
		}
		else if (get_genration() == 2) {
			cout << "genration:\t" << "second" << endl;
		}
		else if (get_genration() == 3) {
			cout << "genration:\t" << "third" << endl;
		}
		else {
			cout << "genration:\t" << "unknown" << endl;
		}
		cout << "model:\t\t" << get_model() << endl;
		cout << "serialNumber:\t" << get_serialNumber() << endl;
		cout << "price:\t\t" << get_price() << endl;
		company->show_company_info();
		cout << "\n";
	}

	virtual void  Take_A_Selfie() {
		cout << "NOKIA \tSelfie is taken" << endl;
	}
	virtual void MakeACall() {
		cout << "NOKIA \tis calling.." << endl;
	}
};

class Iphone :public Smartphone {
public:
	Iphone(string type, string model, int genration, double price) :
		Smartphone(type, model, genration, price) {
		company->set_manufacturing_company("Apple");
		company->set_manufacturing_location("USA");
	}
	virtual void  show_info() {
		cout << "IPHONE INFO" << endl;
		cout << "ID:\t\t" << get_serialNumber() << endl;
		cout << "type:\t\t" << get_type() << endl;
		if (get_genration() == 1) {
			cout << "genration:\t" << "first" << endl;
		}
		else if (get_genration() == 2) {
			cout << "genration:\t" << "second" << endl;
		}
		else if (get_genration() == 3) {
			cout << "genration:\t" << "third" << endl;
		}
		else {
			cout << "genration:\t" << "unknown" << endl;
		}
		cout << "model:\t\t" << get_model() << endl;
		cout << "serialNumber:\t" << get_serialNumber() << endl;
		cout << "price:\t\t" << get_price() << endl;
		company->show_company_info();
		cout << "\n";
	}

	virtual void  Take_A_Selfie() {
		cout << "Iphone \tSelfie is taken" << endl;
	}
	virtual void MakeACall() {
		cout << "Iphone \tis calling.." << endl;
	}
};

class Samsung :public Smartphone {
public:
	Samsung(string type, string model, int genration, double price) :
		Smartphone(type, model, genration, price) {
		company->set_manufacturing_company("Samsung");
		company->set_manufacturing_location("Korean");
	}
	virtual void  show_info() {
		cout << "SAMSUNG INFO" << endl;
		cout << "ID:\t\t" << get_serialNumber() << endl;
		cout << "type:\t\t" << get_type() << endl;
		if (get_genration() == 1) {
			cout << "genration:\t" << "first" << endl;
		}
		else if (get_genration() == 2) {
			cout << "genration:\t" << "second" << endl;
		}
		else if (get_genration() == 3) {
			cout << "genration:\t" << "third" << endl;
		}
		else {
			cout << "genration:\t" << "unknown" << endl;
		}
		cout << "model:\t\t" << get_model() << endl;
		cout << "serialNumber:\t" << get_serialNumber() << endl;
		cout << "price:\t\t" << get_price() << endl;
		company->show_company_info();
		cout << "\n";
	}

	virtual void  Take_A_Selfie() {
		cout << "Samsung Selfie is taken" << endl;
	}
	virtual void MakeACall() {
		cout << "Samsung is calling.." << endl;
	}
};

class Huawei :public Smartphone {
public:
	Huawei(string type, string model, int genration, double price) :
		Smartphone(type, model, genration, price) {
		company->set_manufacturing_company("Huawei");
		company->set_manufacturing_location("china");
	}
	virtual void  show_info() {
		cout << "HUAWEI INFO" << endl;
		cout << "ID:\t\t" << get_serialNumber() << endl;
		cout << "type:\t\t" << get_type() << endl;
		if (get_genration() == 1) {
			cout << "genration:\t" << "first" << endl;
		}
		else if (get_genration() == 2) {
			cout << "genration:\t" << "second" << endl;
		}
		else if (get_genration() == 3) {
			cout << "genration:\t" << "third" << endl;
		}
		else {
			cout << "genration:\t" << "unknown" << endl;
		}
		cout << "model:\t\t" << get_model() << endl;
		cout << "serialNumber:\t" << get_serialNumber() << endl;
		cout << "price:\t\t" << get_price() << endl;
		company->show_company_info();
		cout << "\n";
	}

	virtual void  Take_A_Selfie() {
		cout << "HUAWEI \tSelfie is taken" << endl;
	}
	virtual void MakeACall() {
		cout << "HUAWEI \tis calling.." << endl;
	}
};

int main() {

	Smartphone* s1 = new Iphone ("Iphone  102 pro", "p6", second, 1000.0);
	Smartphone* s2 = new Samsung("galaxy  note  4", "s2", third,  1300.0);
	Smartphone* s3 = new Huawei ("HUAWEI  dual  3", "hs", first,  500.50);
	Smartphone* s4 = new Nokia  ("NOKIA   dual  4", "a5", third,  1100.0);
	 
	s1->show_info();
	s2->show_info();
	s3->show_info();
	s4->show_info();
	
	s1->Take_A_Selfie();
	s2->Take_A_Selfie();
	s3->Take_A_Selfie();
	s4->Take_A_Selfie();

	cout << "\n\n";

	s1->MakeACall();
	s2->MakeACall();
	s3->MakeACall();
	s4->MakeACall();

	cout << "\n\n";

	delete s1;
	s1 = nullptr;
	delete s2;
	s2 = nullptr;
	delete s3;
	s3 = nullptr;
	delete s4;
	s4 = nullptr;

	system("pause>0");
	return 0;
}
/*
IPHONE INFO
ID:             1
type:           Iphone  102 pro
genration:      second
model:          p6
serialNumber:   1
price:          1000
c_name:         Apple
c_location:     USA


SAMSUNG INFO
ID:             2
type:           galaxy  note  4
genration:      third
model:          s2
serialNumber:   2
price:          1300
c_name:         Samsung
c_location:     Korean


HUAWEI INFO
ID:             3
type:           HUAWEI  dual  3
genration:      first
model:          hs
serialNumber:   3
price:          500.5
c_name:         Huawei
c_location:     china


NOKIA INFO
ID:             4
type:           NOKIA   dual  4
genration:      third
model:          a5
serialNumber:   4
price:          1100
c_name:         Nokia
c_location:     china


Iphone  Selfie is taken
Samsung Selfie is taken
HUAWEI  Selfie is taken
NOKIA   Selfie is taken


Iphone  is calling..
Samsung is calling..
HUAWEI  is calling..
NOKIA   is calling..


Iphone  102 pro with the follwing       ID =1   is destroyed
galaxy  note  4 with the follwing       ID =2   is destroyed
HUAWEI  dual  3 with the follwing       ID =3   is destroyed
NOKIA   dual  4 with the follwing       ID =4   is destroyed
*/