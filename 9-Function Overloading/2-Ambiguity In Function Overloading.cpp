//            Ambiguity in Function Overloading


// In Function overloading, sometimes a situation can occur when the compiler is 
//  unable to choose between two correctly overloaded functions. This situation is said to be ambiguous. 

// Ambiguous statements are error-generating statements and the programs containing ambiguity will not compile.
//  Automatic type conversions are the main cause of ambiguity. I

#include<iostream>
using namespace std;
void call(float a){
    cout<<"Float parameter passed in function ";
}
void call(double a){
    cout<<"Double parameter passed in function ";
}
int main(){
call('a');
return 0;
}
// output of above code is a error
// error: call to 'call' is ambiguous
// call('a');
// ^~~~
// first.cpp:3:6: note: candidate function
// void call(float a){
    //  ^
// first.cpp:6:6: note: candidate function
// void call(double a)


// Reason for ambiguity
//  When there is no exact type match, the compiler looks for the closest match. 
//   The closest match for “test(‘a’);” will be “void test(int a)”, since it is not present,
//     void test(double d) and void (float f)will cause ambiguity. Both are valid conversions.
//      This confusion causes an error message to be displayed and prevents the program from compiling.
