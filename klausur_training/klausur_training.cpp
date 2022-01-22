
using namespace std;
#include <iostream>



int add(int a, int b = 2, int c = 3, int d = 4) {
	return a + b + c + d;
}

int main()
{
	/*
	const int size = 20;
	int arr[size] = {1,2,3,4,5,6,7,8,9,10};

	// place const after the datatype that you dont want to be changed !
	char const letter = 'a'; 
	char diffrentLetter = letter + 1;
	cout << diffrentLetter << endl;

	// letter = 'r'; //you cannot assign to a variable that is const	

	//cout << letter++ << endl; // error
	cout << char(letter+1) << endl; // ok
	const char x_letter = 'a';
	cout << char(x_letter+1) << endl;

	char const* buf;
	buf = &letter; // ok
	// *letter = 'b'; // Error

	char* const x_buf = (char*) &letter; // muss installed
	// x_buf = &letter; // Error
	*x_buf = 'c'; // ok
	cout << *x_buf << endl;
	


	double const pi = 3.14;
	double const* const p_pi = &pi;  // Zeiger und Wert müssen konstant sein, sonst würde das obige const aufgehoben

	int x = 10;
	int* const xptr = &x; // *xptr = val is okay
	int y = 20;

	double const g = 9.86;
	double pa = 4.12;
	double pb = 5.23;
	double const* p_pa = &pi; // p_pa = &pb; is okay
	
	double* const p_pb = &pb; // *p_pb = 2.5; is okay

	////Kommentieren Sie die folgenden Zeile aus (immer nur eine Zeile) und 
	////beobachten Sie das Verhalten bzw. die Fehlermeldungen

	//pi = 3.145;
	//*p_pi = 3.145;
	//p_pi = &g;
	//p_pa = &g;
	//*p_pa = 10.76;
	//*p_pb = 0.98;
	//p_pb = &pa;
	//xptr = &y;
	//*xptr = 30;

	*/
	
	cout << "number:" << add(1) << endl; // 10

	return 0;
}

