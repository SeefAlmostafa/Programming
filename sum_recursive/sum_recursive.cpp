
#include <iostream>
using namespace std;

int sum(int b,int l);

int main(){

    cout << "sum(1,5):" << sum(1, 5) << endl;
    cout << "sum(1,1):" << sum(1, 1) << endl;
    cout << "sum(4,6):" << sum(4, 6) << endl;
    cout << "sum(1,7):" << sum(1, 7) << endl;
    cout << "sum(3,5):" << sum(3, 5) << endl;
    cout << "sum(4,5):" << sum(4, 5) << endl;

    return 0;
}

int sum(int b, int l) {
    if (b == l)
        return b;
    else
        return  b + sum(b+1,l);
}