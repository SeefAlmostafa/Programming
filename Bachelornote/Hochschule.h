#pragma once
#include "Professor.h"
#include "Student.h"

class Hochschule {
private:
	static unsigned int ID;
	unsigned int serial;
	string name;
	string addresse;
	unsigned int anzahlStudierende;
	list<Professor*> Professoren;
	list<Student*> studenten;

	void destroy();

public:
	Hochschule(string name, string addresse, unsigned int anzahlStudierende);
	Hochschule();
	~Hochschule();
	string get_h_name();
	unsigned int get_h_serial();
	void add_student(Student&);
	void add_students(list<Student*>&);
	void add_Professor(Professor&);
	void add_Professors(list<Professor*>&);

	//void delete_student();
	void print_student_list();
	void print_Proffesor_list();
};
