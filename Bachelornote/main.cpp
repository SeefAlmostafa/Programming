
#include "Hochschule.h"

void start() {
	Veranstaltung* v1 = new Veranstaltung("Mathe");
	Veranstaltung* v2 = new Veranstaltung("sql progra");
	Veranstaltung* v3 = new Veranstaltung("Algebra");
	Veranstaltung* v4 = new Veranstaltung("Datenbanken");
	Veranstaltung* v5 = new Veranstaltung("Progammierung");

	Veranstaltung* va = new Veranstaltung("Grunlagen der Medien");
	Veranstaltung* vb = new Veranstaltung("Design");
	Veranstaltung* vc = new Veranstaltung("Filmproduktion");
	Veranstaltung* vd = new Veranstaltung("3d Design");
	Veranstaltung* ve = new Veranstaltung("VR programmierung");

	Student* s1 = new Student(54353, "Seef", "Almostafa", "Google_street_24");
	Student* s2 = new Student(64643, "Rami", "alschauie", "Amazon_street_53");
	Student* s3 = new Student(43253, "Munaf", "Alkurdi", "GLS_street_46");
	Student* s4 = new Student(53443, "Ahmed", "alfares", "bahnhof_street_35");

	Professor* p1 = new Professor("Markus", "Barth", Umweltpalnnung_Umwelttechnik);
	Professor* p2 = new Professor("Markus", "Schwinn", Umweltpalnnung_Umwelttechnik);
	Professor* p3 = new Professor("Gisela", "Sparmann", Umweltpalnnung_Umwelttechnik);
	Professor* p4 = new Professor("Thomas", "Klemm", Umweltwirtschaft_Umweltrecht);

	Module* m = new  Module("Informatik");
	s1->add_module(*m);
	s2->add_module(*m);

	Hochschule* UCB = new Hochschule("Umwelt Campus Birrkenfeld", "Campusallee, 55768 Hoppstädten-Weiersbach", 50000);
	list<Veranstaltung*> Informatik_faecher = { v1, v2, v3, v4, v5 };
	list<Veranstaltung*> Medien_faecher = { va, vb,vc, vd, ve };

	list<Professor*>professoren = { p1,p2,p3,p4 };
	list<Student*>studenten = { s1,s2,s3,s4 };

	p1->add_veranstaltungen(Informatik_faecher);
	p2->add_veranstaltungen(Medien_faecher);

	UCB->add_students(studenten);
	UCB->add_Professors(professoren);

	UCB->print_student_list();
	UCB->print_Proffesor_list();

	cout << "Anzahl Mirglieder:" << Mitglied::get_anzahl_personen() << endl;
	delete UCB;
	UCB = nullptr;
	delete m;
	m = nullptr;
}

int main(){

	start();

	system("pause");
	return 0;
}
