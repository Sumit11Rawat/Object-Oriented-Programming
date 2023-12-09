#include<iostream>
using namespace std;
template <class T>
void Swap(T &x, T &y) {

    T temp;

    temp = x;
    x = y;
    y = temp;
}

int main() 
{

    int x=20, y=30;
    cout << "Before Swap:";
cout<<x<<" "<<y;

    Swap(x, y);

    cout << "\n\nAfter Function Templates Swap:";
cout<<x<<" "<<y<<endl;

    return 0;
}

// output of above code is
// Before Swap:20 30
// After Function Templates Swap:30 20
