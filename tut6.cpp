// There are two types of Header files:
// 1. System header files : It comes with the compiler 
#include<iostream>
// 2. User defined header files : It is written by the programmer 
// #include"this.h"  --> This will produce an error if this.h not present in the current directory. 

using namespace std;

int main()
{   int a = 4, b =5 ;
    cout<<"Operators in C++"<<endl;     // endl is used for go to next line same as /n(required"")  ~M.I.🔥
    cout<<"Following types of operators in C++ "<<endl;
    
    // Arithmetic Operators ~M.I. 🔥
    cout<<"The value of a+b is :"<<a+b<<endl;
    cout<<"The value of a-b is :"<<a-b<<endl;
    cout<<"The value of a*b is :"<<a*b<<endl;
    cout<<"The value of a/b is :"<<a/b<<endl;
    cout<<"The value of a++ is :"<<a++<<endl;  // increment operator ( first print then add ) ~ M.I. all below🔥
    cout<<"The value of ++a is :"<<++a<<endl;  // increment operator ( first add then print )  
    cout<<"The value of a-- is :"<<a--<<endl;  // Decrement operator ( first print then add )
    cout<<"The value of --a is :"<<--a<<endl;  // Decrement operator ( first subtract then print )
    cout<<endl; // endl used without "" for start new line batter then \n

    // Assignment Operators --> Used to assign values to variables 
    int c = 4 , d = 6;
    char e = 'r';

    // Comparison operators ~M.I. 🔥
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;  
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<endl;
    // 0 means false & 1 means true 

    // Logical operators ~M.I. 🔥
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is : "<<((a==b) && (a<b))<<endl; //  && use both conditions must true  ~M.I. 🔥
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is : "<<((a==b) || (a<b))<<endl; //   || use as or if one condition true then work ~M.I. 🔥
    cout<<"The value of this logical not operator (!(a==b)) is : "<<(!(a==b))<<endl; // ! not condition represent  


    return 0;
}




















