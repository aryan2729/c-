#include<iostream>
using namespace std;

//🔥 Parameterized Constructors and Default Constructors in C++ 🔥

/* Parameterized constructors -> Are those constructors that take one or more parameters.
Default constructors -> Are those constructors that take no parameters. The main things 
to note here are that (constructors are written in the public section of the class and
the constructors don’t have a return type). An example program to demonstrate the concept
of the constructor is shown below.
*/

class Complex{
    int a;
    int b; // pvt default 

    public:

        Complex(int , int ); //🚀 Constructor declaration only 

        void printNumber(){
                cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex :: Complex(int x , int y){ //🚀 This is Parameterized Construction as it takes 1 or more parameter. 
    
    a = x;
    b = y;
}

int main(){

    // Implicit call 
    Complex a(3,5);

    // Explicit call
    Complex b = Complex(6,9);

    a.printNumber();
    b.printNumber();


    return 0;
}