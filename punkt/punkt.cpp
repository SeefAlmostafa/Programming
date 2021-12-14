
using namespace std;
#include "point.h"


// first opition 2x copy constructor 
Point shiftPoint(Point p, int sx, int sy);
Point shiftPoint(Point p, int sx, int sy) {
	p.init(p.get_x() + sx, p.get_y() + sy);
	return p;
}

// second opition better (1x copy constructor)
void shiftPoint(Point p, int sx, int sy, Point& result);
void shiftPoint(Point p, int sx, int sy, Point& result) {
	result = p;
	result.init(p.get_x() + sx, p.get_y() + sy);
}




int main()
{

	Point x;													// default constructor called
	Point y(3, 2);
	Point z = y;												// copy constructor called

	print(x);													// (0,0)
	print(y);													// (3,2)
	print(z);													// (3,2)

	Point p1, p2;												// default constructor
	p1 = Point(8, 7);											// default constructor + assignment
	p2 = p1;													// assignment
	Point p3(p1);												// copy constructor

	print(p1);													// (8,7)
	print(p2);													// (8,7)
	print(p3);													// (8,7)


	// copy constructor can be used in a diffrent functions 

	Point p4(5, 5);												// (5,5)

	// Point shifted_point = shiftPoint(p4, 1, 1);
	// print(shifted_point);									// (6,6)
	/*
	* Notice:
	copy constructor will be called 2x
	first when passing p4 as parameter
	second when returning shifted_point
	*/

	Point p5;
	shiftPoint(p4, 2, 2, p5);									// (7,7)
	print(p5);

	system("pause");
	return 0;

}


