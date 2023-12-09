    //    VIRTUAL FUNCTION

// A C++ virtual function is a member function in the base class that you redefine in a derived class.
//  It is declared using the virtual keyword.

// There is a necessity to use the single pointer to refer to all the objects of the different classes.
//  So, we create the pointer to the base class that refers to all the derived objects. 
// But, when base class pointer contains the address of the derived class object, always executes the base class function. 
// This issue can only be resolved by using the 'virtual' function.

// When the function is made virtual, C++ determines which function is to be invoked at the runtime based on the type of the object pointed by the base class pointer.

// Rules of Virtual Function

// Virtual functions must be members of some class.
// Virtual functions cannot be static members.
// They are accessed through object pointers.
// They can be a friend of another class.
// A virtual function must be defined in the base class, even though it is not used.
// The prototypes of a virtual function of the base class and all the derived classes must be identical. If the two functions with the same name but different prototypes, C++ will consider them as the overloaded functions.
// We cannot have a virtual constructor, but we can have a virtual destructor
// Consider the situation when we don't use the virtual keyword.


#include<iostream>
using namespace std;
class base{
    public:
     virtual void show(){
        cout<<"I'm in base class"<<endl;
    }
};
class derived :public base{
    public:
    void show(){
        cout<<"I'm in derived class"<<endl;
    }
};
int main(){
base *p;
base y;
p=&y;
p->show();
derived x;
p=&x;
// if show function in base class is not declared as virtual it will 
// still show I'm in base class
// But if it is declared as virtual function than it will print 
// I'm in derived class
p->show();
p=&y;
p->show();

return 0;
}
// output of above code is
// I'm in base class
// I'm in derived class
// I'm in base class
