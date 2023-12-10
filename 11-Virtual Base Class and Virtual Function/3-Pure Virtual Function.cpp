//              PURE VIRTUAL FUNCTION

//-->  pure virtual function in c++ is a virtual function for which we do not have an implementation.
//     We do not write any functionality in it. Instead, we only declare this function.
//     A pure virtual function does not carry any definition related to its base class.
//     A pure virtual function is declared by assigning a zero (0) in its declaration. 
//     Any class containing one or more pure virtual functions can not be used to define any object. 
//     For this reason, these classes are known as abstract classes. Classes derived from abstract classes need to implement the pure virtual functions of these classes.


// Characteristics of Pure Virtual Function in C++
// The following are the characteristics of a pure virtual function in c++:

//--> A pure virtual function does not do anything, which means it is used to resemble the template, and the derived classes implement the function.
//    It is an empty function because it does not contain any definition of the functionality of its base class in it.
//    Derived class can call a member or pure virtual function in c++.
//    The user in the derived class redefines a pure virtual function.
//    Any class in c++ that contains a pure virtual function does not allow the user to create the object of that class.


#include<iostream>
using namespace std;
class student{
    public:
    virtual void show()=0;
};
class boys:public student{
    public:
    void show(){
        cout<<"I'm in derived class ";
    }
};
int main(){
boys x;
x.show();
// student y;
// y.show()
// above line will throw error bcoz the student class contain a pure 
// virtual function and hence no object can be created for it
    return 0;
}
// output of above code is
// I'm in derived class 
