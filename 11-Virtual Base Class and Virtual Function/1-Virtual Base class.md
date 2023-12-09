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

