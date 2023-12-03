//              OPERATOR OVERLOADING

// in C++, Operator overloading is a compile-time polymorphism.
//  It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.

// For example, we can overload an operator ‘+’ in a class like String so that we 
//     can concatenate two strings by just using +.

// Binary operators operate on two operand. 

#include<iostream>
using namespace std;
class student{
public:
int age;
student(){
    age=0;
}
student(int age){
    this->age=age;
}
student operator +(student &obj){
student temp;
temp.age=age+obj.age;
return temp;
}
};
int main(){
student x(6);
student y(5);
cout<<"Age before binary operator overloading "<<x.age<<" "<<y.age<<endl;
student z=x+y;
cout<<"Age after binary operator overloading "<<z.age;

    return 0;
}
// output is 
// Age before binary operator overloading 6 5
// Age after binary operator overloading 11
