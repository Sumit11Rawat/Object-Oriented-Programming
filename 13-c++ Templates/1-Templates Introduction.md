 C+++ Templates
 

--> A C++ template is a powerful feature added to C++. It allows you to define the generic classes and generic functions and thus provides support for generic 
   programming.

--> Generic programming is a technique where generic types are used as parameters in algorithms so that they can work for a variety of data types.

--> For example, a software company may need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write one sort() and pass 
     the datatype as a parameter. 

--> C++ adds two new keywords to support templates: ‘template’ and ‘type name’. The second keyword can always be replaced by the keyword ‘class’.

Templates can be represented in two ways:

                1)Function templates
                2)Class templates


Function Template

--> Generic functions use the concept of a function template. Generic functions define a set of operations that can be applied to the various types of data.
-->  For example, if we have an add() function, we can create versions of the add function for adding the int, float or double 
    type values.
--> A Generic function is created by using the keyword template. The template defines what function will do.

                          for example                        template < class Ttype> ret_type func_name(parameter_list)  
                                                             {  
                                                             // body of function.  
                                                              }  
                                        -->Where Ttype: It is a placeholder name for a data type used by the function. It is used within the function definition. It 
                                           is only a placeholder that the compiler will automatically replace this placeholder with the actual data type.   


                          code to add two no using template
                          
                          #include <iostream>  
                            #include <iostream>  
                            using namespace std;  
                            template<class T> T add(T &a,T &b)  
                            {  
                             T result = a+b;  
                              return result;  
      
                              }  
                              int main()  
                             {  
                             int i =2;  
                              int j =3;  
                              float m = 2.3;  
                              float n = 1.2;  
                              cout<<"Addition of i and j is :"<<add(i,j);  


                            output of above code is 
                            Addition of i and j is :5
                            Addition of m and n is :3.5
                              cout<<'\n';  
                               cout<<"Addition of m and n is :"<<add(m,n);  
                              return 0;  
                              }
