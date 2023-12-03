//              OPERATOR OVERLOADING USING FRIEND FUNCTION

#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(){
        real=0;
        img=0;
    }
    complex(int real,int img){
        this->real=real;
        this->img=img;
    }
    void display(){
        cout<<real<<" +i"<<img<<endl;
    }
    // defining overloaded function as friend
    friend complex operator +(complex x,complex y);
};
complex operator +(complex x,complex y){
    complex temp;
    temp.real= x.real+y.real;
    temp.img = x.img+y.img;
    return temp;
}
int main(){
complex x(2,3);
complex y(4,5);
x.display();
y.display();
complex z=x + y;
z.display();
return 0;
}
// output of above code is
// 2 +i3
// 4 +i5
// 6 +i8
