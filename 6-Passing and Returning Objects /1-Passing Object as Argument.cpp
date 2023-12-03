//              Passing objects to the function 

// To pass an object as an argument we write the
//    object name as the argument while calling the function the same way we do it for other variables.

#include<iostream>
using namespace std;
class student{
    public:
    int a;
    void add(student x){
        a+=x.a;
    }
};

int main(){
student x;
cout<<"Enter the value for object 1:";
cin>>x.a;
student y;
cout<<"Enter the value for object 2: ";
cin>>y.a;
cout<<"Initial value :";
cout<<x.a<<" "<<y.a<<endl;
y.add(x);
cout<<"Final value :";
cout<<x.a<<" "<<y.a;
return 0;
}
// The output of above code is
// Enter the value for object 1: 3
// Enter the value for object 2: 4
// Initial value :3 4
// Final value :3 7
