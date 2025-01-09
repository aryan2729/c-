/*

🔥 Constructors in Derived Class -> first read this before tut48.cpp

/ We can use constructors in derived classes in C++
/ If the base class constructor does not have any arguments, there is no need for any constructor in the derived class
/ But if there are one or more arguments in the base class constructor, derived class need to pass argument to the base class constructor
/ If both base and derived classes have constructors, base class constructor is executed first

/ In multiple inheritances, base classes are constructed in the order in which they appear in the class deceleration. For example if there are three classes “A”, “B”, and “C”, and the class “C” is inheriting classes “A” and “B”. If the class “A” is written before class “B” then the constructor of class “A” will be executed first. But if the class “B” is written before class “A” then the constructor of class “B” will be executed first.
/ In multilevel inheritance, the constructors are executed in the order of inheritance. For example if there are three classes “A”, “B”, and “C”, and the class “B” is inheriting classes “A” and the class “C” is inheriting classes “B”. Then the constructor will run according to the order of inheritance such as the constructor of class “A” will be called first then the constructor of class “B” will be called and at the end constructor of class “C” will be called.

🔥Syntax
Derived-Constructor (arg1, arg2, arg3….): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4)
{
............. 
} 
🔥

C++ supports a special syntax for passing arguments to multiple base classes
The constructor of the derived class receives all the arguments at once and then will pass the call to the respective base classes
The body is called after the constructors is finished executing 


🚀Special Case of Virtual Base Class

The constructors for virtual base classes are invoked before a non-virtual base class
If there are multiple virtual base classes, they are invoked in the order declared
Any non-virtual base class are then constructed before the derived class constructor is executed

🚀 Order ==> Virutal class then Base class then Derived class 🚀
*/

