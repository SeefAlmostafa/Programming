#include "Univ.h"
#include <cmath>
#include <cstring>


void UNIVERSITY::copy(UNIVERSITY const& other) {
	university_name = strdup(other.university_name);

	STUDENT* curr = other.start;
	while (curr != nullptr) {
		STUDENT* copy = new STUDENT();
		copy->id = curr->id;
		this->count++;
		strcpy(copy->name, curr->name);
		strcpy(copy->address, curr->address);
		copy->gpa = curr->gpa;
		copy->next_student = nullptr;
		UNIVERSITY& university = *this;
		university = university + *copy;
		curr = curr->next_student;
	}

}


void UNIVERSITY::destroy() {
	delete[] university_name;
	auto curr = start;
	while (curr != nullptr) {
		auto prev = curr;
		curr = curr->next_student;
		delete prev;
	}
	delete curr;
}

UNIVERSITY::UNIVERSITY() {
	university_name = new char[256];
	count = 0;
	start = nullptr;
}

UNIVERSITY::UNIVERSITY(UNIVERSITY const& other) : UNIVERSITY() {
	copy(other);
}

UNIVERSITY::~UNIVERSITY() {
	destroy();
}

UNIVERSITY& UNIVERSITY::operator=(UNIVERSITY const& other) {
	if (this != &other) {
		destroy();
		copy(other);
	}
	return *this;
}

UNIVERSITY& UNIVERSITY::operator+(STUDENT& student) {
	student.next_student = nullptr;
	if (this->start == nullptr) {
		this->start = &student;
	}
	else {
		STUDENT* tail = this->start;
		while (tail->next_student != nullptr) {
			tail = tail->next_student;
		}
		tail->next_student = &student;
	}
	count++;
	return *this;
}

void UNIVERSITY::set_university_name(char* university_name) {
	strcpy(this->university_name, university_name);
}

void UNIVERSITY::set_count(int count) {
	this->count = count;
}

char* const UNIVERSITY::get_university_name() const {
	return university_name;
}

int UNIVERSITY::get_count()const {
	return count;
}


double UNIVERSITY::Rec_AVG() const {
	double avg = 0.0;
	for (auto curr = start; curr != nullptr; curr = curr->next_student) {
		avg += curr->gpa;
	}

	return round((avg / count) * 100) / 100;
}


ostream& operator<<(ostream& os, UNIVERSITY const& uy) {
	os << uy.get_university_name() << endl;
	for (auto curr = uy.start; curr != nullptr; curr = curr->next_student) {
		os << curr->id << " "
			<< curr->name << " "
			<< curr->address << " "
			<< curr->gpa << endl;
	}
	return os;
}

istream& operator>>(istream& is, UNIVERSITY& uy) {
	is >> uy.university_name;
	while (!is.eof()) {
		STUDENT* student = new STUDENT();
		is >> student->id;
		is >> student->name;
		is >> student->address;
		is >> student->gpa;
		uy = uy + *student;
	}
	return is;
}