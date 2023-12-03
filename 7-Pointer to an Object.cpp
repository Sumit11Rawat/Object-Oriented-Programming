//           POINTER TO OBJECTS

//  pointer is a variable that stores the memory address of another variable
//   (or object) as its value. A pointer aims to point to a data type which may be int, character, double, etc.

// A pointer to an object in C++ is used to store the address of an object.

#include<iostream>
using namespace std;
class student{
public:
int data;
student(int data){
    cout<<"Parameterised function called "<<endl;
    this->data=data;
}
void get(){
    cout<<"I'm in get function "<<endl;
}
void show(){
    cout<<"I'm in show  function "<<endl;
}
};
int main(){
student a(5);
student* p= &a;
p->get();
p->show();
    return 0;
}
// The output of above code is
// Parameterised function called 
// I'm in get function 
// I'm in show  function 
