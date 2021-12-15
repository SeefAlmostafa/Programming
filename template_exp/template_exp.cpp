

#include <iostream>
using namespace std;
#include <string>

template<class S>
class SUM {
private:
	S first;
	S second;
public:
	SUM() {};
	SUM(S first, S second) {
		this->first = first;
		this->second = second;
	}
	S sum();
	// setter & getter
	void set_first(S first);
	void set_second(S second);
	S get_first();
	S get_second();
};

template<class S>
void SUM<S>::set_first(S first) { 
	this->first = first;
}

template<class S> 
void SUM<S>::set_second(S second) {
	this->second = second;
}

template<class S>
S SUM<S>::get_first() { 
	return this->first;
}

template<class S>
S SUM<S>::get_second() { 
	return this->second;
}

template<class S>
S SUM<S> ::sum() {
	return get_first() + get_second();
}

template<class S>
void print(SUM<S> &other) {
	cout << "first:" << other.get_first() << endl;
	cout << "second:" << other.get_second() << endl;
}

int main() {
	cout << "Integers" << endl;
	SUM<int> sum2Integers(3, 4);
	print(sum2Integers);
	int result = sum2Integers.sum();
	cout << "result:" << result << endl << endl;

	cout << "doubles" << endl;
	SUM<double> sum2Doubles(3.3, 4.5);
	print(sum2Doubles);
	double erg = sum2Doubles.sum();
	cout << "result:" << erg << endl << endl;

	cout << "strings" << endl;
	SUM<string> sum2Strings("Seef ", "Almostafa");
	print(sum2Strings);
	string text = sum2Strings.sum();
	cout << "result:" << text << endl << endl;

	cout << "bool" << endl;
	SUM<bool> sum2Boolean(true, false);
	print(sum2Boolean);
	bool decision = sum2Boolean.sum();
	cout << "result:" << decision << endl << endl;

	// '+' = 43 und '-' = 48 -> 88 = 'X'
	cout << "chars" << endl;
	SUM<char> sum2Chars('+', '-'); 
	print(sum2Chars);
	char letter = sum2Chars.sum();
	cout << "result:" << letter << endl << endl;

	system("pause");
	return 0;
}
/*
* output:
	Integers
	first:3
	second:4
	result:7

	doubles
	first:3.3
	second:4.5
	result:7.8

	strings
	first:Seef
	second:Almostafa
	result:Seef Almostafa

	bool
	first:1
	second:0
	result:1

	chars
	first:+
	second:-
	result:X
*/