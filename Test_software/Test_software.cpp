
using namespace std;
#include <iostream>

int test(int x)
{
	int y = 1;
	if (x > 0)
		x = -1 * x;
	if (y >= 1) //  if(true)
		y = y + 1;

	return x * y;
}

int main()
{
	int result;
	int x = 0;

	
	// test 1
    result = test(0);
	x = result;
	cout << "Result:" << result << endl;

	// test 2
	result = test(1);
	cout << "Result:" << result << endl;
	
	// test 3
	result = test(2);
	cout << "Result:" << result << endl;

	// test 4
	result = test(-3);
	cout << "Result:" << result << endl;
	

	system("pause");
	return 0;


/*
	// test 5
	for (int i = 0; i < 10; i++) {
		cout << test(x) << endl;
		x--;
	}

*/

/*
	Ausgabe:
	x is always negativ
	y in test() is always True
	0
	-2
	-4
	-6
	-8
	-10
	-12
	-14
	-16
	-18
*/


}

