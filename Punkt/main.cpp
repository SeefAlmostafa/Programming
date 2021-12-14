
using namespace std;
#include "Punkt.h"


int main()
{
	Punkt p1;		 // default constructor called
	Punkt p(3, 2);	 // default constructor called

	print(p1);		 // (0,0)
	print(p);		 // (3,2)

	system("pause");
	return 0;
}


