//              OPERATOR OVERLOADING

// in C++, Operator overloading is a compile-time polymorphism.
//  It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.

// For example, we can overload an operator ‘+’ in a class like String so that we 
//     can concatenate two strings by just using +.

// Unary operators operate on only one operand. The increment operator ++ and decrement operator -- are examples of unary operators.
#include<iostream>
using namespace std;
class student{
public:
int age;

student(int age){
    this->age=age;
}
void operator ++(){
age+=10;
}
};
int main(){
    int n;
    cout<<"Enter age ";
    cin>>n;
student x(n);
cout<<"Age before unary operator overloading "<<x.age<<endl;
++x;
cout<<"Age after unary operator overloading "<<x.age;

    return 0;
}
// output is 
// Enter age 20
// Age before unary operator overloading 20
// Age after unary operator overloading 30
