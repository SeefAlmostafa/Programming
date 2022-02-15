using namespace std;
#include <iostream>
#include <string>

double mydiv(const int& a, const int& b);
class Error{};

int main () {
    int a,b;
    double c;

    try{
        cout << "Enter a: , b:";
        cin >> a >> b;
        c = mydiv(a,b);
        cout << "a/b: " << c << endl;
    }
    catch(string &s){
      cout << "Unable to complete" <<endl;
    } 
    catch(Error &e){
        cout << "!!!Critical ERROR!!!" << endl;
    }
}


double mydiv(const int& a, const int& b){
    try{
    if(b <0){
        throw (string)"Nenner ist negativ";
    }
    if (b==0){
        throw Error();}
    }
    catch(string &s){
        cout << s <<endl;
        throw;
    } 
    catch(Error &e){
        cout << "Division durch 0!" << endl;
        throw;
    }
    return ((double)a/b);
}