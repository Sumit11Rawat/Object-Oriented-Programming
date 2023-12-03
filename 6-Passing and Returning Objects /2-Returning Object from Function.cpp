//              Returning object from function

#include<iostream>
using namespace std;
class student{
    public:
    int a;
    student add(student p,student q){
        student c;
        c.a=p.a+q.a;
        return  c;
    }
};

int main(){
student x;
cout<<"Enter the value for object 1:";
cin>>x.a;
student y;
cout<<"Enter the value for object 2: ";
cin>>y.a;
student z;
z.a=0;

cout<<"Initial value :";
cout<<x.a<<" "<<y.a<<" "<<z.a<<endl;
// note that calling z.add(x,y) will give an error
z=z.add(x,y);
cout<<"Final value :";
cout<<x.a<<" "<<y.a<<" "<<z.a;
return 0;
}
// The output of above code is
// Enter the value for object 1: 5
// Enter the value for object 2: 4
// Initial value :5 4 0
// Final value :5 4 9
