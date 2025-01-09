#include<iostream>
using namespace std;

//🔥 Destructor -> A destructor is a type of function which is called when the object
//  is destroyed. Destructor never takes an argument nor does it return any value.
 
int Objectcount = 0; 

class num{
    public:
        
        num(){  // constructor with no arguments                                                //does increment in the variable “count” and prints its value. The main thing to note here is that every time the new object will be created this constructor will run.        
            Objectcount++;
            cout<<"This is the time when constructor is called for object number "<<Objectcount<<endl;  
        }

        ~num(){ // 🚀 Destructor                                                                 The destructor prints the value of the variable “count” and decrement in the value of “count”. The main thing to note here is that every time the object has been destroyed this destructor will run.
            cout<<"This is the time when destructor is called for object number "<<Objectcount<<endl;
            Objectcount--;

        }
};


int main(){

    cout<<"We are inside our main function "<<endl;
    cout<<"Creating first object n1"<<endl;

    num n1;
    {        //🚀 <-- This is called (block) whenever we end this block whatever in our block all destroyed 🚀 | when block end n2 and n3 destroyed 
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2 , n3;
        cout<<"Exiting the block "<<endl;
    }
    
    cout<<"Back to main"<<endl;

    return 0;
}