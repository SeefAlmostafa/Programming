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
                // the constructor of classA called twice
    classA aa; // once called by default constructor  
    int x;
public:

    
    classB(int x) {
        this->aa = classA(); // second called again inside the constructor
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

   // 1- The only way to initialize a reference is intializer list
   // 1- The only way to initialize a class that doesn't have default constructor (e.g. Class B)  is intializer list
};


int main(){
    int hello = 10;
    classB b(5);
    classC cc(hello, b);
    return 0;
}

/*
    Output:
    ClassA Constructor
    ClassA Constructor
*/
