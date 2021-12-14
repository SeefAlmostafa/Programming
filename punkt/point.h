#pragma once
#pragma once
#include <iostream>

class Punkt {
private:
	int x;
	int y;
public:

	Punkt() :x(0), y(0) {}

	// Notice: : y(new_y),x(new_x) is wrong because we declearte x before than y
	Punkt(int new_x, int new_y) :x(new_x), y(new_y) {}

	// methods
	void init(int x, int y);
	void set_x(const int x);
	int get_x() const;
	void set_y(const int y);
	int get_y() const;
};

// ********inline functions********************************************************
// The complexity can run faster if we have inline functions
// use inline functions when having short implemnation of functions such as get_x()
// you can implement the functions inside the class or in the header file
// Notice: you can not write inline functions in a cpp.source, that is an Error !

inline void Punkt::set_x(const int x) { this->x = x; }
inline int Punkt::get_x() const { return this->x; }
inline void Punkt::set_y(const int y) { this->y = y; }
inline int Punkt::get_y() const { return this->y; }

inline void print(const Punkt& p) {
	// globale function
	std::cout << "(" << p.get_x() << "," << p.get_y() << ")" << endl;
}

inline void Punkt::init(int x, int y) {
	this->x = x;
	this->y = y;
}
