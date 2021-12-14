
using namespace std;
#include "point.h"

int main()
{

	Punkt p1;			//  default constructor called
	Punkt p(3, 2);	

	print(p1);			// (0,0)
	print(p);			// (3,2)

	system("pause");
	return 0;
}


