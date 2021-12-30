/*
    homework !
    What happens if we move a constructor to the private section ?

    1 - As this constructor is private, extrernal users can't make objects of such a class using this constructor!
    If this is the empty constructor and no further constructors, users can't create a class at all

    Why would that be benificial ? !


    what happens if we moce copy constructor to the private section ?

    2 - if a copy constructor is made private, objects of that class become non - copyable.



    3 - Why argument to a copy constructor must be passed as a reference ?
    A copy constructor is called when an object is passed by value.
    Copy constructor itself is a function.So if we pass an argument by value in a copy constructor, a call to copy constructor
    would be made to call copy constructor ==> infinite recursion
    Therefore compiler doesn’t allow parameters to be passed by value.


    c++ do not force you to use const why is it a good practice to use it?

    4 - see problem down ...

*/

/*
    When we create our own copy constructor, 
    we pass an object by reference and we generally pass it as a const reference.
    One reason for passing const reference is,
    we should use const in C++ wherever possible so that objects are not accidentally modified.
    This is one good reason for passing reference as const, but there is more to it. For example,
    predict the output of following C++ program. Assume that copy elision is not done by compiler.

*/

#include<iostream>
using namespace std;

class Test
{
    /* Class data members */
public:
    Test(Test& t) { /* Copy data members from t*/ }
    Test() { /* Initialize data members */ }
};

Test fun()
{
    cout << "fun() Called\n";
    Test t;
    return t;
}

int main()
{
    Test t1;
    Test t2 = fun(); // error, compiler created temporary objects cannot be bound to non-const references
                     // temporary objects are objects that has no name
    return 0;
}

/*
    The program looks fine at first look, but it has compiler error.
    If we add const in copy constructor, the program works fine, 
    i.e., we change copy constructor to following.

    Test(const Test &t) { cout << "Copy Constructor Called\n"; }

    Or if we change the line “Test t2 = fun();” to following two lines, then also the program works fine.

    Test t2;
    t2 = fun();

    The function fun() returns by value.
    So the compiler creates a temporary object which is copied to t2 using copy constructor in the original program
    (The temporary object is passed as an argument to copy constructor).
    The reason for compiler error is, compiler created temporary objects cannot be bound to non-const references
    and the original program tries to do that.
    It doesn’t make sense to modify compiler created temporary objects as they can die any moment.

*/