
using namespace std;
#include <iostream>

int func(int A, int B, int X)
{
	if ((A > 1) && (B == 0))
		X = X / A;
	if ((A == 2) || (X > 1))
		X = X + 1;
	return X;
}


int main()
{
	int result;

	// Test 1
    result = func(3.5, 3, 8);
	cout << "result:" << result << endl;

	// Test 2
	result = func(2, 3, 4);
	cout << "result:" << result << endl;

	// Test 3
	result = func(4, 7, 0);
	cout << "result:" << result << endl;

	// Test 4
	result = func(4, 0, 4);
	cout << "result:" << result << endl;

	// Test 5
	result = func(0, 4, 8);
	cout << "result:" << result << endl;


	system("pause");
	return 0;
}

