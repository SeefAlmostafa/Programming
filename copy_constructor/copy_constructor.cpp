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
Therefore compiler doesn�t allow parameters to be passed by value.


c++ do not force you to use const why is it a good practice to use it?

4 - https ://www.geeksforgeeks.org/copy-constructor-argument-const/

*/