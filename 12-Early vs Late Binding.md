                           EARLY vs LATE BINDING

--> Binding refers to the process of converting identifiers (such as variable and performance names) into addresses.

--> Binding is done for each variable and functions. For functions, it means that matching the call with the right function definition by the compiler.
    It takes place either at compile time or at runtime.


  ![image](https://github.com/Sumit11Rawat/Object-Oriented-Programming/assets/136540491/1333ddc5-c475-43b8-b593-f7aa8826d078)


EARLY BINDING


-->  Early Binding (compile-time time polymorphism) As the name indicates, compiler (or linker) directly associate an address to the function call. It replaces the 
     call with a machine language instruction that tells the mainframe to leap to the address of the function.
     
--> Therefore, when the point of execution comes in that function call line, it reads that instruction and then jumps to the function given by memory address.

--> By default early binding happens in C++



                       for example   // CPP Program to illustrate early binding. 
                                     // Any normal function call (without virtual) 
                                    // is binded early. Here we have taken base 
                                    // and derived class example so that readers 
                                    // can easily compare and see difference in 
                                   // outputs. 
                                   
                                  #include<iostream> 
                                  using namespace std; 
	
                                  class Base 
                                   { 
                                    public: 
                                 void show() { cout<<" In Base \n"; } 
                                   }; 
	
                                  class Derived: public Base 
                                         { 
                                  public: 
                                 	void show() { cout<<"In Derived \n"; } 
                                  }; 
	 
                                  int main(void) 
                                   { 
                                    Base *bp = new Derived; 

                               	 // The function call decided at 
	                               // compile time (compiler sees type 
                                // of pointer and calls base class 
                               	// function. 
                                  bp->show(); 

                               	return 0; 
                                 } 

                                 output of above code is
                                 In Base
    


Late Binding :

--> (Run time polymorphism) In this, the compiler adds code that identifies the kind of object at runtime then matches the call with the right function definition

--> Late binding is also called dynamic binding. Late binding occurs when we make implicit or indirect function calls in our program. An example of this is using 
   function pointers or virtual functions when using classes. Here, the function call’s memory reference is not determined at compile-time, but rather at run-time.


                   for example // CPP Program to illustrate late binding 
                               #include<iostream> 
                               using namespace std; 
	
                               class Base 
                               { 
                              public: 
	                        virtual void show() { cout<<" In Base \n"; } 
                                 }; 
	
                               class Derived: public Base 
                                 { 
                              public: 
	                       void show() { cout<<"In Derived \n"; } 
                                  }; 
	
                                int main(void) 
                                  { 
	                       Base *bp = new Derived; 
	                        bp->show(); // RUN-TIME POLYMORPHISM 
	                         return 0; 
                                  } 

                                output of above code is
				In Derived
