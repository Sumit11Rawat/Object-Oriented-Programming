                   CONSTRUCTOR

-->• Constructor is a member function of a class, whose name is same as the class name.

--> Constructor is a special type of member function that is used to initialize the data members for an object of a class automatically, when an object of the same 
     class is created.
     
--> Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object that is why it is known as constructor.

--> Constructor do not return value, hence they do not have a return type.

-->• Constructors are mostly declared in the public section of the class though it can be declared in the private section of the class.

                for example 

                            class student{
                            public:
                            int age;
                            student(){
                            age=0;
                            }
                            };
                            int main(){
                            student x;
                            }
                  Note -> here when an object is created for class student then constructor automatically sets the value 
                          of age as 0


  Types of constrcutor


 1-Default constructor
                          -->  A constructor with no parameters is known as a default constructor
                          -->Note: If we have not defined a constructor in our class, then the C++ compiler will 
                                   automatically create a default constructor with an empty code and no parameters.

                         for example
                          class student {
                             public:
                             int age;
                             student(){
                             age=0
                             }
                             void show(){
                             cout<<"age is "<<age;
                             }
                             };
                             int main(){
                             student x;
                             x.show();
                             return 0;
                             }
                             
                             output is
                             age is 0;
                         

2-Parameterized Constructor
                             -->In C++, a constructor with parameters is known as a parameterized constructor.

  -->It is used to initialize the various data elements of different objects with different values when they are created.

                             for example 
                             class student {
                             public:
                             int age;
                             student(int age){
                             this->age=age;
                             }
                             void show(){
                             cout<<"age is "<<age;
                             }
                             };
                             int main(){
                             student x(30);
                             x.show();
                             return 0;
                             }

                             output is
                             age is 30


3-Copy Constructor
                   -->The copy constructor in C++ is used to copy data of one object to another.
                   
-->These are the special type of Constructors that takes an object as an argument and is used to copy 
                      values of data members of one object into another object.
                      
  -->An object can be initialized with another object of same type. This is same as copying the contents 
                      of a class to another class.

                      for example
                       for example 
                             class student {
                             public:
                             int age;
                             student(int age){
                             this->age=age;
                             }
                             void show(){
                             cout<<"age is "<<age;
                             }
                             };
                             int main(){
                             student x(30);
                             x.show();
                             cout<<endl;
                             student y=x;
                             or 
                             student y(x);
                             y.show();
                             return 0;
                             }

                             output is
                             age is 30
                             age is 30
                             
      Note-the parameter of copy constructor has an adress of an object which it uses to copy its content
                                    
                 
