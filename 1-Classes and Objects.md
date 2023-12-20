                          CLASS

-->Class in C++ is the building block that leads to Object-Oriented programming. It is a user-defined data type, which holds its own data members and member functions, 
    which can be accessed and used by creating an instance of that class.

-->A C++ class is like a blueprint for an object

-->Data members are the data variables and member functions are the functions used to manipulate these variables together, these data members and member functions 
   define the properties and behavior of the objects in a Class.

                          OBJECT

-->An Object is an instance of a Class.
-->When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.


 Defining classes 
                               -->class keyword is used followed by class name
                               --> write appropriate acess specifier 
                               -->a class must always end with an semi colon

                         class animal{
                            access specifier

                            data members

                            member functions
                            }

Acess modifiers--> 
                  Access Specifiers in a class are used to assign the accessibility to the class members, i.e., they set some restrictions on 
                 the class members so that they can’t be directly accessed by the outside functions.

                 
            There are 3 types of access modifiers available in C++: 

            1-Public
                     The data members and member functions declared as public can be accessed by other classes and functions too. The public members of a class can be 
                     accessed from anywhere in the program using the direct member access operator (.) with the object of that class. 


            2-Private
                     The class members declared as private can be accessed only by the member functions inside the class. They are not allowed to be accessed directly 
                     by any object or function outside the class. Only the member functions or the friend functions are allowed to access the private data members of 
                     the class. 

                     
            3-Protected
                       The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with 
                       the help of a friend class. The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of 
                       that class as well. 

Declaring objects    
                      -->When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access 
                         functions defined in the class, you need to create objects.


                    syntax    ClassName ObjectName;
                            ex animal x;
                            here animal is class name and x is its object

Member Functions in Classes
                                   
                                   There are 2 ways to define a member function:

            Inside class definition
            Outside class definition
	    
          --> To define a member function outside the class definition we have to use the scope resolution:: operator 
                along with the class name and function name. 


               for example

                // C++ program to demonstrate function 
               // declaration outside class 

                #include <bits/stdc++.h> 
                  using namespace std; 
                 class Geeks 
                 { 
                 	public: 
                	string geekname; 
                	int id; 
	
                 	// printname is not defined inside class definition 
                 	void printname(); 
	
                 	// printid is defined inside class definition 
                  	void printid() 
                    	{ 
               		cout <<"Geek id is: "<<id; 
                     	} 
                       }; 

                   // Definition of printname using scope resolution operator :: 
                    void Geeks::printname() 
                   { 
                   	cout <<"Geekname is: "<<geekname; 
                     } 
                   int main() { 
	
	                Geeks obj1; 
	                 obj1.geekname = "xyz"; 
                 	obj1.id=15; 
	
	               // call printname() 
                 	obj1.printname(); 
                 	cout << endl; 
	
                  	// call printid() 
                  	obj1.printid(); 
                  	return 0; 
                       } 

                                       
                    

                      

                     

                
