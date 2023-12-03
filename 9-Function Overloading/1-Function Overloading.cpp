//                  FUNCTION OVERLOADING

// Function overloading is a feature of object-oriented programming
//   where two or more functions can have the same name but different parameters. 

// If multiple functions having same name but parameters of the functions should be different is known as Function Overloading.

#include<iostream>
using namespace std;

void product(int length,int breadth){
    cout<<"Area is "<<length*breadth<<endl;
}
void product(double length,double breadth){
    cout<<"Area is "<<length*breadth;
}

int main(){

product(2,3);
product(2.35,4.58);
return 0;

}
// output of above code is 
// Area is 6
// Area is 10.763
