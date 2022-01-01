using namespace std;
#include <iostream>

class Rectangle {
private:
	double width;
	double height;
public:
	Rectangle(double width = 0.0,double height = 0.0):
		width(width),height(height) {}

	double computeArea() const {
		return width * height;
	}

	double getHeight() const {
		return height;
	}

	double getWidth() const {
		return width;
	}

	void setWidth(double width) {
		this->width = width;
	}
};

int main(){

	Rectangle r1(2, 3);
	r1.computeArea();
	r1.setWidth(10);

	const Rectangle r2(4, 5);
	r2.computeArea();

	// const Object can not call non-const member function
	//r2.setWidth(10);

	const Rectangle* r3 = new Rectangle(4, 5);
	// r3->setWidth();		// can not, const data
	r3 = &r1;				// ok, not const member

	Rectangle* const r4 = new Rectangle(1, 2);
	r4->setWidth(10.2);		// ok, non const data
	// r4 = &r1;			// can not, const pointer

	const Rectangle* const r5 = new Rectangle(1, 2);
	// r5->setWidth(10.2);  // can not, const data
	// r5 = &r1;			// can not, const pointer
	return 0;
}

/*
const is useful when you want to tell the functions to do specific,limited things,
this is good for the safety for the user and the coder, an app for editung Pictures should only be able to edit pictures and not have
diffrent access on other things -> that is why const is a good practice -> use it as possible in oop 
*/