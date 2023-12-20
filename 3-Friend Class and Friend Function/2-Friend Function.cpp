//                           FRIEND FUNCTION

// Data hiding is a fundamental concept of object-oriented programming. 

// It restricts the access of private members from outside of the class.

// Similarly, protected members can only be accessed by derived classes and are inaccessible from outside

// However, there is a feature in C++ called friend functions that break 
//   this rule and allow us to access member functions from outside the class.

                //  FRIEND FUNCTION
//  friend function can access private and protected members of other classes in which it is declared as a friend.
//    Syntax        class rectangle{
//                    friend void area
//                      }
//                   void area(){
//                     statements
    //                   }
#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:
rectangle(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
    }
    void show(){
        cout<<"The length of rectangle is "<<length;
        cout<<endl;
        cout<<"The breadth of rectangle is "<<breadth;
    }
    friend void area(rectangle &);
};
void area(rectangle &t){
cout<<"The area of rectangle is "<<t.length*t.breadth;
}
int main(){
rectangle x(5,6);
x.show();
cout<<endl<<endl;
area(x);

return 0;
}
// output of above code is 
// The length of rectangle is 5
// The breadth of rectangle is 6

// The area of rectangle is 30
