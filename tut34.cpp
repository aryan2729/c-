#include<iostream>
using namespace std;

/*🔥 Copy constructor -> Is a type of constructor that creates a copy of another object.
If we want one object to resemble another object we can use a copy constructor. 
If ( no copy constructor is written in the program compiler will supply its own copy constructor) . */

class Number{
    int a ; // pvt default 

    public:
        Number(){ // default constructor if object not called then run 
            a = 0;
        } 
        
        Number(int num){ // constructor 
            a = num;
        } 

        //🔥 When no copy constructor is called , compiler supplies it's own copy constructor(cc)  | below line 
        Number(Number &obj){  //🚀 Copy constructor 🚀
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;
        } 

        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }

} ; // struct or class (;) essential..


int main(){

    Number x , y , z(45) , z2 ; // z has a value of 45
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble z or x or y 
    Number z1(z);
    z1.display();   //🪐 Copy constructor invoked 

    z2 = z;         //🪐 Copy constructor not called (invoked) 
    z2.display();   // here comiler supplies its own cc 

    Number z3 = z;  
    z3.display();   //🪐 Copy constructor invoked(called) 


    return 0;
}