 C++ Templates
 

--> A C++ template is a powerful feature added to C++. It allows you to define the generic classes and generic functions and thus provides support for generic 
   programming.

--> Generic programming is a technique where generic types are used as parameters in algorithms so that they can work for a variety of data types.

--> For example, a software company may need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write one sort() and pass 
     the datatype as a parameter. 

--> C++ adds two new keywords to support templates: ‘template’ and ‘type name’. The second keyword can always be replaced by the keyword ‘class’.

Templates can be represented in two ways:

                1)Function templates
                2)Class templates


![image](https://github.com/Sumit11Rawat/Object-Oriented-Programming/assets/136540491/be447887-7e6e-40d0-aed8-65eaed7e0635)



            



Function Template

--> Generic functions use the concept of a function template. Generic functions define a set of operations that can be applied to the various types of data.
-->  For example, if we have an add() function, we can create versions of the add function for adding the int, float or double 
    type values.
--> A Generic function is created by using the keyword template. The template defines what function will do.

                          for example                    
                          template < class Ttype> ret_type func_name(parameter_list)  
                                                             {  
                                                             // body of function.  
                                                              }  
                                                              
-->Where Ttype: It is a placeholder name for a data type used by the function. It is used within the function definition. It 
   is only a placeholder that the compiler will automatically replace this placeholder with the actual data type.   


                         for example  code to add two no using template
                          
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
                              cout<<'\n';  
                               cout<<"Addition of m and n is :"<<add(m,n);  
                              return 0;  
                              }

                              output of above code is 
                            Addition of i and j is :5
                            Addition of m and n is :3.5

Class Templates

-->> Class templates like function templates, class templates are useful when a class defines something that is independent of the data type.

--> When a class uses the concept of Template, then the class is known as generic class.

                         syntax  template<class Ttype>  
                                 class class_name  
                                  {  
                                    .  
                                    .  
                                  }

                                  Now, we create an instance of a class

                                  class_name<type> ob;
                                  
                                  where class_name: It is the name of the class.
                                  type: It is the type of the data that the class is operating on.
                                  ob: It is the name of the object.


                        for example
                        #include <iostream>  
                        using namespace std;  
                       template<class T>  
                         class A   
                         {  
                           public:  
                            T num1 = 5;  
                           T num2 = 6;  
                           void add()  
                           {  
                             std::cout << "Addition of num1 and num2 : " << num1+num2<<std::endl;  
                            }  
      
                           };  
  
                            int main()  
                           {  
                           A<int> d;  
                           d.add();  
                            return 0;  
                            }

                            output of above code is
                            Addition of num1 and num2 : 11


  CLASS TEMPLATE WITH MULTIPLE PARAMETERS

                                   template<class T1, class T2, ......>   
                                   class class_name  
                                   {  
                                   // Body of the class.  
                                   }  
                                 
                                   for example

                                   #include <iostream>  
                                   using namespace std;  
                                   template<class T1, class T2>  
                                   class A   
                                   {  
                                   T1 a;  
                                   T2 b;  
                                   public:  
                                   A(T1 x,T2 y)  
                                  {  
                                    a = x;  
                                    b = y;  
                                  }  
                                  void display()  
                                   {  
                                   std::cout << "Values of a and b are : " << a<<" ,"<<b<<std::endl;  
                                     }  
                                    };  
  
                                  int main()  
                                    {  
                                  A<int,float> d(5,6.5);  
                                  d.display();  
                                    return 0;  
                                     }
                                     
                                   output of above code is
                                   Values of a and b are : 5,6.5
                         
