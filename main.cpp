

using namespace std;
#include <iostream>

void swap(int&, int&);

int main()
{
	// Before
	int x = 10, y = 20;

	swap(x, y);

	// After
	cout << "x:" << x << endl; //20
	cout << "y:" << y << endl; //10

}

void swap(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}