
/* 
     why c++ does not allow using this pointer to access a static member data ?
     why c++ does not allow creating const static member function ?

    A static object is shared among all objects and doesn't have its own data members
    So this invalidate the use of this pointer
    When you apply the const qualifier to a nonstatic member function,
    it affects the this pointer.For a const - qualified member function of class C,
    the this pointer is of type C const*,
    whereas for a member function that is not const - qualified, the this pointer is of type C* .

    A static member function does not have a this pointer
    (such a function is not called on a particular instance of a class),
    so const qualification of a static member function doesn't make any sense.

*/

