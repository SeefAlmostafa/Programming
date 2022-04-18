
#include <fstream>

#include "student.h"

class UNIVERSITY {
private:
	STUDENT* start;
	char* university_name;
	int count;

	// private functions for cleaner code
	void copy(UNIVERSITY const& other);
	void destroy();

public:
	UNIVERSITY();
	UNIVERSITY(UNIVERSITY const& other);
	~UNIVERSITY();
	UNIVERSITY& operator=(UNIVERSITY const& other);
	UNIVERSITY& operator+(STUDENT& student);
	void set_university_name(char* name);
	void set_count(int count);
	char* const get_university_name() const;
	int get_count() const;

	friend ostream& operator<<(ostream& os, UNIVERSITY const& uy);
	friend istream& operator>>(istream& is, UNIVERSITY& uy);

	double Rec_AVG() const;
};