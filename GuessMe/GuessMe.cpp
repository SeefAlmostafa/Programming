using namespace std;
#include <iostream>


class classA {
public:
    classA() {
        cout << "ClassA Constructor\n";
    }
};


class classB {
private:
    classA aa; // called
    int x;
public:
    // classA was called twice, due to not using the initialize list
    classB(int x) {
        this->aa = classA(); // called again
        this->x = x;
    }
};


class classC {
private:
    int& y;
    classB bb;
public:
    // classB was called only once due to the initialize list
    classC(int& y, const classB& bb):y(y),bb(bb) {} // only one time here called & initialized
};


int main(){
    int hello = 10;
    classB b(5);
    classC cc(hello, b);
    return 0;
}

/*
ClassA Constructor
ClassA Constructor
*/
