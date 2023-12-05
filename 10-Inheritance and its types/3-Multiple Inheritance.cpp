        //  MULTILEVEL INHERITANCE

//Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.  


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
        roll_no=51;
        cout<<"I'm in derived class 1 "<<endl<<endl;
        cout<<"The new age is "<<age<<endl;
        cout<<"The new marks is "<<marks<<endl;
            cout<<"The old roll no.is "<<marks<<endl<<endl;
    }
    
};
class sumit_1:public Sumit{
public:
int email;
sumit_1(){
    age=23;
    marks=95;
    roll_no=55;
    email=1234;
    cout<<"I'm in derived class 2"<<endl<<endl;
      cout<<"The new age is "<<age<<endl;
        cout<<"The new marks is "<<marks<<endl;
           cout<<"The new roll no.is "<<roll_no<<endl;
           cout<<"The email is "<<email<<endl<<endl;
}


};
int main(){
sumit_1 x;
return 0;
}
// output of above code is
// I'm in base class

// The old age is 21
// The old marks is 80

// I'm in derived class 1 
//
// The new age is 22
// The new marks is 90
// The old roll no.is 90

// I'm in derived class 2

// The new age is 23
// The new marks is 95
// The new roll no.is 55
// The email is 1234
