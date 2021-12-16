
using namespace std;
#include <iostream>
#define strdup _strdup
#include <string.h>

// Mit Kopierkonstruktor 

class String {
private:
	char* str;
	void copy(String const& other) {
		str = strdup(other.str);
	}
	void destroy(void) {
		delete[] str;
	}
public:
	String() {
		str = strdup(nullptr);
	}
	String(char const* s) {
		str = strdup(s);
	}

	String(String const& other) {
		str = strdup(other.str);
	}
	~String() {
		destroy();
	}
	String& operator=(String const& other) {
		if (this != &other) {
			destroy();
			copy(other);
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

// call-by-value !!!
void func(String s) {
	puts(s.get());
}

// Rueckgabe eines Objekts
String getline() {
	char buf[22] = { "Hello my name is seef" };
	String ret = buf;
	return ret;
}


String
a("Hello World\n"),		// (1)
c = a,					// (2)	
b;						// (3)

int main() {
	b = c;				// (4)  ok
	cout << "a:" << a.get() << endl;
	cout << "b:" << b.get() << endl;

	String text = getline();
	cout << "text:" << text.get() << endl;

	return 0;

	/*
	a:Hello World
	b:Hello World
	text:Hello my name is seef
	*/

}
/*
	Loesung:
	Die Klasse String muss um einen Kopierkonstruktor erweitert werden.
	Wert-uebergabe von Objekten an eine Funktion
	- (call-by-value)
	  und
	- (die Rückgabe eines Ergebnisobjekts)
	werden ebenfalls als Initialisierung betrachtet,
	rufen also den Kopierkonstruktor implizit auf!
*/
