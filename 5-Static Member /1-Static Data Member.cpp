//            Static class member

// Static data members are class members that are declared using static keywords.

// Only one copy of that member is created for the entire class and is shared by 
//    all the objects of that class, no matter how many objects are created.

// It is initialized before any object of this class is created, even before the main starts.

// NOTE-Static members are only declared in a class declaration, not defined. 
 //      They must be explicitly defined outside the class using the scope resolution operator.

//  NOTE-static members can be directly accessed using class name with scope resollution operator
//   without creating any objects

#include<iostream>
using namespace std;
class Demo{
    public:
    int x;
    static int i;
};
int Demo::i=5;

int main(){

cout<<"i :"<<Demo::i<<endl;
cout<<endl;
Demo obj1,obj2;
obj1.x=1;
obj1.i=2;

obj2.x=4;
obj2.i=3;

cout<<"x :"<<obj1.x<<endl;
cout<<"x :"<<obj2.x<<endl;
cout<<endl;
// Note that here since i is static only one copy of it is created
//     thus obj1 and obj2 store same value of i
cout<<"i :"<<obj1.i<<endl;
cout<<"i :"<<obj2.i<<endl;
cout<<"i :"<<Demo::i;

    return 0;
}
// output of above code is

// i :5

// x :1
// x :4

// i :3
// i :3
// i :3
