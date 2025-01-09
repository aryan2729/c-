#include<iostream>
using namespace std;

//🔥 Constructors 🔥M.I.P
/*A constructor is a special member function with the same
name as the class. The constructor doesn’t have a return type. 
Constructors are used to initialize the objects of its class.
Constructors are automatically invoked whenever an object is created.
*/

class Complex{
    int a , b; // pvt default

    public:
        // creating a Constructor 
        // Constructor is special member function with the  same name as class.
        // It is automatically invoked or don't need to call this ...
        // It is used to initializ the objects of its class . 
        Complex(void); // 🚀 Constructor declaration only 

        void printData(void){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex :: Complex(void){ // 🚀 Constructor full here | This is default constructor as it takes no parameter 
    a = 10;
    b = 20;
}


int main(){
    
    Complex c1,c2,c3;
    
    c1.printData();
    c2.printData();
    c3.printData();

    //🪐objects “c1”, “c2”, and “c3” of the complex data type are created. 
    //The main thing to note here is that when we are creating objects the 
    //constructor will run for each object and will assign the values.
    
    return 0;
}



/*🔥Important Characteristics of Constructors in C++🔥
----------------------------------------------------
1. A constructor should be declared in the public section of the class.
2. They are automatically invoked(called) whenever the object is created .
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address.
*/
