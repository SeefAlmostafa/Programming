using namespace std;
#include <iostream>
#include <string>

class Error{};
double myDiv(const int& a,const int& b){
    if(b < 0){
       throw (string)"Nenner kann nicht negativ sein";
    }
    if(b == 0){
        throw Error();
    }
    return ((double)(a/b));
}

int main(){
    int a,b;
    double c;
    try{
        cout << "Enter a: , b:";
        cin >> a >> b;
        c = myDiv(a,b);
        cout << "a/b:" << c << endl;

    }
    catch(string &s){
        cout << "Nenner kann nicht negativ sein"<<endl;
    }

    catch(Error &e){
        cout << "Nenner kann nicht null sein" << endl;
    }

    return 0;
}