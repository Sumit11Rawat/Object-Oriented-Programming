        //   SINGLE INHERITANCE

// The inheritance in which a single derived class is inherited from a single base class is known as the Single Inheritance.

// The child class can inherit all the members of the base class according to the visibility mode
//    (i.e., private, protected, and public) that is specified during the inheritance

// However, it is optional to define the visibility mode during the inheritance. If you do not define it,
//    it sets the visibility mode to private by default.

#include<iostream>
using namespace std;
class Student{
public:
int age;
int marks;
Student(){
     age=21;
    marks=80;
    cout<<"I'm in base class"<<endl<<endl;
         cout<<"The old age is "<<age<<endl;
        cout<<"The old marks is "<<marks<<endl<<endl;
}

};
class Sumit:public Student{
    public:
    int roll_no;
    Sumit(){
        
        age=22;
        marks=90;
        cout<<"I'm in derived class "<<endl<<endl;
        cout<<"The new age is "<<age<<endl;
        cout<<"The new marks is "<<marks<<endl;
    }
    
};
int main(){
Sumit x;
return 0;
}
// output of above code is
// I'm in base class

// The old age is 21
// The old marks is 80

// I'm in derived class 

// The new age is 22
// The new marks is 90
