
using namespace std;
#include <iostream>
#define strdup _strdup
#include <string.h>

// Ohne Kopierkonstruktor 

class String {
private:
	char* str;
public:
	String() {
		str = strdup(nullptr);
	}
	String(char const* s) {
		str = strdup(s);
	}
	~String() {
		delete[] str;
	}
	String& operator=(String const& other) {
		if (this != &other) {
			delete[] str;
			str = strdup(other.str);
		}
		return *this;
	}
	void set(char const* data) {
		str = strdup(data);
	}
	char const* get(void) const {
		return str;
	}
};

String
a("Hello World\n"), // (1)  ok
// c = a,			// (2)	Falsch,Erzeugung von Objekt ohne Kopierkonstruktor
b;					// (3)  ok

int main() {
	// b = c;		(4) Falsch, c wurde noch nicht erzeugt, von daher wird keine Wertzuweisung gemacht
	cout << "a:" << a.get() << endl;
	return 0;
}
// Problem: es gibt kein Kopierkonstruktor

