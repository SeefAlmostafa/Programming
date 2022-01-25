
#include <iostream>
using namespace std;

class X{
public:
    ~X() {
        cout << "X destructor called" << endl;
    }
};

int main(){

    // Program
    X** a;
    a = new X * [2];
    a[0] = new X[2];
    a[1] = new X[2];
    // delete[] a; // nicht richtig , macht speichermüll (Meomory Leak)


    // KlausurFragen:
    // Frage 1: was würde passieren wenn man delete[] a schreibt ?
    // Antwort: nur Zeiger werden freigegeben aber keine Inhalte (werte)

    // Frage 2: wie wird man richtig die Freigabe machen?
    // Anwort: mit einer Schleife..
    
    // frage 3: implementieren Sie dies?
   
    // Implementierung
    //--------------------------------

    for (int i = 0; i < 2; i++) {
        delete[] a[i];
    }
    delete[] a;

    //________________________________


    return 0;
    
}


