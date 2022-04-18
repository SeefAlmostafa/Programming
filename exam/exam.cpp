using namespace std;
#include <string.h>

#include <iostream>

class String {
   private:
    // ein Datenelement: Zeiger auf
    // dynamisch allokierten Speicher
    char *str;

   public:
    // Konstruktoren, Destruktor
    String() {
        str = strdup("");
    }
    String(char const *s) {
        str = strdup(s);
    }
    ~String() {
    }
    // überladener Zuweisungsoperator
    String &operator=(String const &other) {
        if (this != &other) {
            str = strdup(other.str);
        }
        return *this;
    }
    // Zugriffsfunktionen
    void set(char const *data) {
        str = strdup(data);
    }
    char const *get() const { return str; }
};

String
    a("Hello World\n"),  // (1)
    b,                   // (2)
    c = a;               // (3)

int main() {
    b = c;  // (4)

    cout << a.get() << endl;
    cout << b.get() << endl;
    cout << c.get() << endl;
    system("pause");
    return 0;
}