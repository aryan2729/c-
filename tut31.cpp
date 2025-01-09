#include<iostream>
using namespace std;

/*🔥 Constructor Overloading --> Constructor overloading is a concept in 
which one class can have multiple constructors with different parameters. 
The main thing to note here is that the constructors will run according to
the arguments for example if a program consists of 3 constructors with 
0, 1, and 2 arguments, so if we pass 1 argument to the constructor the
compiler will automatically run the constructor which is taking 1 argument.
*/


class Complex{
    int a , b; // pvt default 

    public:
        Complex(){ // default constructor --> Generally this use 
            a = 0;
            b = 0;
        }
        Complex(int x , int y){ // constructor with 2 arguments 
            a = x; 
            b = y;
        }

        Complex(int x){ // constructor with 1 argument 
            a = x;
            b = 0;
        }

        void printNumber(){
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }



}; 

int main(){
    Complex c1(2,4);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3; // default constructor no() need 
    c3.printNumber();

    return 0;
}