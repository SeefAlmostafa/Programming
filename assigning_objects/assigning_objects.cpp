
using namespace std;
#include <iostream>

// tip:for pointers define your own copy Constructor
// this allow you to avoid shallow copy 
// for pointers use deep Copy (your own copy Constructor)
// if you did not create copy Constructor,
// the Compiler would create one automatically 
// the copy Constructor will be called in 2 cases
// first: pass object (without reference) to function
// second:return object from function

class Mynumber {
private:
    int* val1;
    int val2;
public:
    Mynumber(int x = 3,int y = 5) {
        val1 = new int;
        *val1 = x;
        val2 = y;
    }

    ~Mynumber() {
       // delete val1;
       // val1 = nullptr;
    }

    void printValuesAndAddress() {
        cout << "val1:" << *val1 << " " << val1 << endl;
        cout << "val2:" << val2  << " " << &val2 << endl << endl;
    }
};

int main(){

    Mynumber a;
    Mynumber b(3, 4);

    a.printValuesAndAddress();
    b.printValuesAndAddress();
    b = a; // assign a to b (shallow copy)
           // Be Careful from using '=' with pointers
    b.printValuesAndAddress();

    return 0;
}

/*
* Notice that if you allocate variables in the heap or stack, the content will be copyed
* The addresse of the variables in the stack will not even changed (without pointers) 
* but once we allocate in heap then we have two problems:
* first one: is that we have two diffrent variables point on val1,
  which means when we call the Destructor, the Compiler will delete only one 
* second problem: is that the address of variable val1 of b is lost,
  which means we can not delete the content of it, so it will cause memory leak

    See Output:
    val1:3 0000013518DB1190
    val2:5 000000072D5DF7D0

    val1:3 0000013518DAF450
    val2:4 000000072D5DF800

    val1:3 0000013518DB1190
    val2:5 000000072D5DF800
*/
