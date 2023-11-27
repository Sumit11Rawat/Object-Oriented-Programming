#include<iostream>
using namespace std;
class record{
char name[30];
int id;
public:
void gets(int a);

void show(int b);

};
void record::gets(int i){
    cout<<"Enter the name of student "<<i<<"-";
    cin>>name;
    cout<<endl;
    cout<<"Enter the id of student "<<i<<"-";
    cin>>id;
    cout<<endl;
    }

void record::show(int i){
    cout<<"The name of student"<<i<<" is "<<name<<endl;
    cout<<"The id of student "<<i<<" is "<<id;
    cout<<endl<<endl;
}

int main(){

int n;
cout<<"Enter the no of student whose record is to be stored ";
cin>>n;
// defining array of object
record x[n];
for(int i=1;i<=n;i++){
  x[i].gets(i);
}
cout<<"The record of student are ";
cout<<endl;
for(int i=1;i<=n;i++){
    x[i].show(i);
}


    return 0;
}
// output of above code is

// Enter the no of student whose record is to be stored 3
// Enter the name of student 1-sumit 

// Enter the id of student 1-1

// Enter the name of student 2-virendra

// Enter the id of student 2-2

// Enter the name of student 3-suyash

// Enter the id of student 3-3

// The record of student are 
// The name of student1 is sumit
// The id of student 1 is 1

// The name of student2 is virendra
// The id of student 2 is 2

// The name of student3 is suyash
// The id of student 3 is 3
