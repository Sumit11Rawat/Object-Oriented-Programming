Introduction to Virtual Base Class in C++

![image](https://github.com/Sumit11Rawat/Object-Oriented-Programming/assets/136540491/e2fec9a7-091f-4e83-9cd7-a02dd3a77609)

-->>As we can see from the figure that data members/function of class A are inherited twice to class D. One through class B and second through class C. When any data / 
    function member of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called? One inherited through B or the 
    other inherited through C. This confuses compiler and it displays error. 


for example 

                   #include <iostream> 
                   #include <iostream> 
                   using namespace std; 

                   class A { 
                   public: 
            	   void show() 
	              { 
	            	cout << "Hello form A \n"; 
                 	} 
                   }; 

                  class B : public A { 
                   }; 

                  class C : public A { 
                   }; 

                 class D : public B, public C { 
                  }; 

                int main() 
                 { 
             	D object; 
            	object.show(); 
                } 


-->above code will throw an error as

                      prog.cpp: In function 'int main()':
                     prog.cpp:29:9: error: request for member 'show' is ambiguous
                        object.show();
                          ^
                      prog.cpp:8:8: note: candidates are: void A::show()
                      void show()
                          ^
                     prog.cpp:8:8: note:                 void A::show()


What is Virtual Class?

-->Virtual Class is defined by writing a keyword “virtual” in the derived classes, allowing only one copy of data to be copied to Class B and Class C (referring to 
   the above example). It prevents multiple instances of a class appearing as a parent class in the inheritance hierarchy when multiple inheritances are used.



Need for Virtual Base Class in C++

-->To prevent the error and let the compiler work efficiently, we’ve to use a virtual base class when multiple inheritances occur. It saves space and avoids ambiguity.

-->When a class is specified as a virtual base class, it prevents duplication of its data members. Only one copy of its data members is shared by all the base classes 
   that use the virtual base class.

-->If a virtual base class is not used, all the derived classes will get duplicated data members. In this case, the compiler cannot decide which one to execute.


for example 
  
                                #include <iostream>
                                 using namespace std;
                                 class A {
                                   public:
                                  A() {
                                  cout << "Constructor A\n";
                                  }
                                  };

                               class B: public virtual A {
                               };

                               class C: public virtual A {
                                 };

                               class D: public B, public C {
                                 };

                               int main() {
                               D object;
                                }

    output of above code is
                             Constructor A
