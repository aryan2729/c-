#include<iostream>
using namespace std;

/*🔥 Ambiguity Resolution in Inheritance

Ambiguity in inheritance can be defined as when one class is derived 
for two or more base classes then there are chances that the base classes
have functions with the same name. So it will confuse derived class to choose
from similar name functions. To solve this ambiguity (scope resolution operator) 
is used “::”  . */

class Base1{
    public:
        void greet(){
            cout<<"How are you ?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"kaise ho ?"<<endl;
        }
};

class Derived : public Base1 , public Base2{
    private:
        int  a ;
    public:
        void greet(){  //🚀 here derived class don't know which greet will use so we use :: with base class name to tell which here using 
            Base1 :: greet();
        }

};

int main(){

    Base1 base1object;
    Base2 base2object;
    base1object.greet();
    base2object.greet();
    Derived d;
    d.greet(); // 🚀 this will show Base1 class greet cuz we already used :: 

    


    return 0;
}