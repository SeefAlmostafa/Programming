using namespace std;
#include <iostream>
#include <string>
#include <vector>

class DateiObjekt {
private:
	string name;
	string erstellAm;
	int groesse;
	string ort;

public:

	DateiObjekt() :DateiObjekt("", "", 0, "") {}

	DateiObjekt(string name, string erstellAm, int groesse, string ort) {
		init(name, erstellAm, groesse, ort);
	}

	void init(string name, string erstellAm, int groesse, string ort) {
		set_name(name);
		set_datum(erstellAm);
		set_size(groesse);
		set_ort(ort);
	}

	void set_name(string name) {
		this->name = name;
	}

	void set_datum(string erstellAm) {
		this->erstellAm = erstellAm;
	}

	void set_size(int groesse) {
		if (groesse <= 0)
			groesse = 10; // 10 MB
		else
			this->groesse = groesse;
	}

	void set_ort(string ort) {
		this->ort = ort;
	}

	string get_name() const {
		return name;
	}

	string get_datum() const {
		return erstellAm;
	}

	int get_groesse() const {
		return groesse;
	}

	string get_ort() const {
		return ort;
	}

};


class Laufwerk {

private:
	string Typ;
	string dateiSystem;
	double belegterSpeicher;
	double speicherKapaezitaet;
	vector<DateiObjekt> dateiObjekt;

public:


	Laufwerk(string Typ, string dateiSystem, double belegterSpeicher,
		double speicherKapaezitaet) {
		init(Typ, dateiSystem, belegterSpeicher, speicherKapaezitaet);
	}

	Laufwerk() : Laufwerk("", "", 0.0, 0.0) {}

	void init(string Typ, string dateiSystem, double belegterSpeicher, double speicherKapaezitaet) {
		set_Typ(Typ);
		set_dateiSystem(dateiSystem);
		set_belegterSpeicher(belegterSpeicher);
		set_speicherKapaezitaet(speicherKapaezitaet);
	}

	void set_Typ(string Typ) {
		if (Typ.length() > 1) 
			Typ = "A";  // make the laufwerk Typ = A if there are any Mistakes  	
		else
		this->Typ = Typ;
	}

	void set_dateiSystem(string dateiSystem) {
		this->dateiSystem = dateiSystem;
	}

	void set_belegterSpeicher(double belegterSpeicher) {
		this->belegterSpeicher = belegterSpeicher; // not done yet
	}

	void set_speicherKapaezitaet(double speicherKapaezitaet) {
		if (speicherKapaezitaet < 2000.0) // maximal
			this->speicherKapaezitaet = speicherKapaezitaet;
		else
			this->speicherKapaezitaet = 1000.0;
	}

	string get_Typ()const {
		return Typ;
	}

	string get_dateiSystem() const {
		string result = "invaild system";
		if ((dateiSystem == "Windows") || (dateiSystem == "Linux") || (dateiSystem == "Mac"))
			result = dateiSystem;
		
		return result;
	}

	double get_belegterSpeicher() const {
		return this->belegterSpeicher;
	}

	double get_freiSpeicher() const {
		return get_speicherKapaezitaet() - get_belegterSpeicher();
	}

	double get_speicherKapaezitaet() const {
		return this->speicherKapaezitaet;
	}

	void print() const {
		cout << "Typ:\t\t\t" << get_Typ() << endl;
		cout << "belegterSpeicher:\t" << get_belegterSpeicher() << endl;
		cout << "freiSpeicher:\t\t" << get_freiSpeicher() << endl;
		cout << "speicherKapaezitaet:\t" << get_speicherKapaezitaet() << endl;
		cout << "System:\t\t\t" << get_dateiSystem() << endl;
	}
};


class Verzeichnis : public DateiObjekt {
private:
	vector<DateiObjekt> inhalt; // ein Verzeichnis enthaelt mehrere DateiObjekte (z.B. Verzeichnise,Datein,Verknuepfungen)

};

class Datei : public DateiObjekt {
private:
	string letzterZugriff;
	string geaendertAm;
public:

	Datei() : Datei("","") {}

	Datei(string letzterZugriff, string geaendertAm){
		set_letzterZugriff(letzterZugriff);
		set_geaendertAm(geaendertAm);
	}

	void set_letzterZugriff(string letzterZugriff) {
		this->letzterZugriff = letzterZugriff;
	}

	void set_geaendertAm (string geaendertAm) {
		this->geaendertAm = geaendertAm;
	}

	string get_letzterZugriff() const {
		return letzterZugriff;
	}
	string get_aenderungsDatum() const {
		return geaendertAm;
	}
};

class Verknuepfung : public DateiObjekt {
private:
	string zielTyp;
	string zielArt;
	string ziel;
public:

	Verknuepfung() : Verknuepfung("", "", "") {}

	Verknuepfung(string zielTyp,string zielArt,string ziel) {
		init(zielTyp, zielArt, ziel);
	}

	void init(string zielTyp, string zielArt, string ziel) {
		set_zielTyp(zielTyp);
		set_zielArt(zielArt);
		set_ziel(ziel);
	}

	void set_zielTyp(string zielTyp) {
		this->zielTyp = zielTyp;
	}

	void set_zielArt(string zielArt) {
		this->zielArt = zielArt;
	}

	void set_ziel(string ziel) {
		this->ziel = ziel;
	}

	string get_zielTyp() const {
		return this->zielTyp;
	}

	string get_zielArt() const {
		return this->zielArt;
	}

	string get_ziel () const {
		return this->ziel;
	}
};

int main(){

	Laufwerk C("C","Windows", 100, 1000);
	C.print();

	Verzeichnis V();

	return 0;

}

/*
	Output:
	Typ:                    C
	belegterSpeicher:       100
	freiSpeicher:           900
	speicherKapaezitaet:    1000
	System:                 Windows

*/