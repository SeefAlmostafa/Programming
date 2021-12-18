
#include <iostream>
using namespace std;

template<class T>
class X {
public:
	T operator+(T);
};

template<class T>
T X<T>::operator+(T arg1) {return arg1;}

int main(){

	X<char> a; 
	X<int> b; 
	X<int> c;

	a + 'z'; // a = a.operator+('z');
	b + 4;   // b = b.operator+(4);

	cout << b + 4 << endl;			 //  4
	cout << a + 'z' << endl;		 // 'z'
	cout << c.operator+(5) << endl;  //  5
	return 0;
}
