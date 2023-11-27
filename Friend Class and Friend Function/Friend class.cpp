//                           FRIEND CLASS

// Data hiding is a fundamental concept of object-oriented programming. 

// It restricts the access of private members from outside of the class.

// Similarly, protected members can only be accessed by derived classes and are inaccessible from outside

// However, there is a feature in C++ called friend functions that break 
//   this rule and allow us to access member functions from outside the class.

                //  FRIEND CLASS
//  friend class can access private and protected members of other classes in which it is declared as a friend.
//    Syntax        class student{
//                    friend class boys
//                      }
//                   class boys{
//                      statements
//                       }
#include<iostream>
using namespace std;
class student{
    int age;
    public:
student(int age){
        this->age=age;
    }
    void show(){
        cout<<"The age in base class is "<<age;
    }
    friend class boy;
};
class boy{
    int roll_no;
    public:
    boy(int age,student&t,int roll_no){
        this->roll_no=roll_no;
        t.age=age;
    }
    void show(student &t){
        cout<<"The age in friend class is "<<t.age<<endl;
        cout<<"The roll no of boy is "<<roll_no;
    }
};
int main(){
student x(5);
x.show();
cout<<endl<<endl;
boy y(10,x,25);
y.show(x);
return 0;
}
// output of above code is 
// The age in base class is 5

// The age in friend class is 10
// The roll no of boy is 25
