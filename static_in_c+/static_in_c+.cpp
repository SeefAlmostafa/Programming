using namespace std;
#include <iostream>
#include <vector>

class A {
 //..
};

class B {
public:
    int f;
    B(int a, int b) {f = 10;}
};

class C {
public:
    static vector<int> v;
    static int arr[10];
    static A a;
    static B b;
};

vector<int> C::v = vector<int>(20);
int C::arr[10];
A C::a;
// B C::b = B(1, 2);

int main(){
    cout << C::b.f; // 10
}

