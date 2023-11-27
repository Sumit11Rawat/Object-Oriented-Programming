//            Static Function Member

// By declaring a function member as static, you make it independent of any particular object of the class. 

// A static member function can be called even if no objects of the class exist and the static functions 
//   are accessed using only the class name and the scope resolution operator ::.

// A static member function can only access static data member, other static member functions and any other functions from outside the class.

// Static member functions have a class scope and they do not have access to the this pointer of the class. 
//   You could use a static member function to determine whether some objects of the class have been created or not.


#include<iostream>
using namespace std;
class rectangle{
    public:
    static int length;
    static int breadth;
    rectangle(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
    }
    static void area(){
        cout<<length*breadth;
    } 
};
// NOTE -this code will give error if we dont intialise the static 
//       data member outside of the class
 int rectangle ::length=1;
int rectangle::breadth=1;
int main(){

rectangle x(2,3);
cout<<"The area of rectangle through object calling is ";
x.area();
cout<<endl;
cout<<"The area of rectangle through classname calling is ";
rectangle::area();



    return 0;
}
// output of above code is
// The area of rectangle through object calling is 6
// The area of rectangle through classname calling is 6
