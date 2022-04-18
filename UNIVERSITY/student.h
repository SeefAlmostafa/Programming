
#include <iostream>
using namespace std;

struct STUDENT {
	char name[64];
	char address[64];
	int id;
	double gpa;
	STUDENT* next_student;
};