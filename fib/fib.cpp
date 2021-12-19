
using namespace std;
#include <iostream>

int fib(int);

int main() {

	// 0  1  2  3  4  5  6  7    8   9   10
	// 0  1  1  2  3  5  8  13  21   34  55 

	cout << "fib(0)" << fib(0) << endl;
	cout << "fib(1)" << fib(1) << endl;
	cout << "fib(5)" << fib(5) << endl;
	cout << "fib(10)" << fib(10) << endl;
	return 0;
}


int fib(int n) {
	if (n == 0 || n == 1)
		return n;
	else return fib(n - 1) + fib(n - 2);
}