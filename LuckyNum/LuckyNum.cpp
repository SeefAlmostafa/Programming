
#include <iostream>
using namespace std;
#include <stdio.h>

class LuckyNum {
private:
	int number;
public:
	LuckyNum(int number) {
		this->number = number;
	}
	void PrintAddress() {
		
		// in c++
		void (LuckyNum:: * ptrtofn)() = &LuckyNum::PrintAddress;
		cout << "Function address:" << (void*&)ptrtofn << endl;
		
		// in c
		//printf("Function address :%p\n", &LuckyNum::PrintAddress);
		cout << "Address:" << &number << endl << "Value:" << number << endl << endl;
	}
};

int main()
{
	LuckyNum n1(1);
	LuckyNum n2(2);
	LuckyNum n3(3);

	n1.PrintAddress();
	n2.PrintAddress();
	n3.PrintAddress();
	return 0;
}
/*
	Function address:00007FF7342411B3
	Address:000000BD2857F9F4
	Value:1

	Function address:00007FF7342411B3
	Address:000000BD2857FA14
	Value:2

	Function address:00007FF7342411B3
	Address:000000BD2857FA34
	Value:3

	Each object variables will have different address in memory!
	However, function are common procedures
	So only one function is loaded in memory with common address
*/