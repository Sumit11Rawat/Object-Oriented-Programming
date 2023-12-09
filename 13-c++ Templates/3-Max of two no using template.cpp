#include<iostream>
using namespace std;
template <class T>
T findmax(T x, T y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int x,y;
    cout<<"Enter 2 no to compare:"<<endl;
    cin>>x>>y;
      cout<<"The max element is "<<findmax(x,y);
return 0;
}
// output of above code
// Enter 2 no to compare:
// 4 5
// The max element is 5
