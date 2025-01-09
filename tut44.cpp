 //🔥 Virtual base class 

/* Virtual base classes prevent multiple instances of a given class from
appearing in an inheritance hierarchy when using multiple inheritances.
To resolve ambiguity when a base class is inherited by multiple derived
classes, declare the base class as virtual using the virtual keyword
before the access specifier (public, private, or protected) in the 
derived class definition.

Syntax examples: class B : virtual public A {};  or class B : public virtual A{}; */


/*
                    STUDENT 
                       |
            |----------|----------|
          TEST                  SPORTS
            |                     |
            |----------|----------|
                       |
                     RESULT 

🚀  
STUDENT 1 VARIABLE COMES 2 TIMES(CUZ TEST & SPORTS BOTH INHERIT 1 VARIABLE ) IN RESULT SO AVOID
THIS AMBIGUITY WE USE VIRTUAL BASE CLASS IN TEST AND SPORTS , SO NOW IN RESULT WE  DON'T GET AMBIGOUS ERROR 



*/
