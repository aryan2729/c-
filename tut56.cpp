#include<iostream>
using namespace std;

// 🔥 Virtual Functions (M.I.P)

class BaseClass {
    public: 
        int var_base;
        virtual void display(){   //🚀 Virtual function 
            cout<<"1 Displaying Base Class variable var_base "<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"2 Displaying Base Class variable var_base "<<endl;
            cout<<"2 Displaying Derived Class variable var_derived "<<endl;
        }
};




int main(){

    BaseClass *base_class_pointer;  //🚀 base class pointer 
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = & obj_derived; //🚀 
    base_class_pointer->display();      /* now cuz we already written virtual function in base class,
                                           whenever we try to display display function using  base class
                                           pointer it will run only derived class display function */
    return 0;

    /*🔥 If we don’t use the “virtual” keyword with the “display” function of the base class then beside 
of the point that we have pointed our base call pointer to derived class object still the compiler
would have called the “display” function of the base class because this is its default behavior as
we have seen in the previous tutorial.

But we have used the “virtual” keyword with the “display” function of the base class to make is virtual
function so when the display function is called by using the base class pointer the display function of
the derived class will run because the base class pointer is pointing to the derived class object. 🔥*/
}