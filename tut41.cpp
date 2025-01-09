#include<iostream>
using namespace std;

/*🔥 Multiple Inheritances -> Multiple inheritances are a type of inheritance
in which one derived class is inherited with more than one base class.*/


/*🚀 Syntax for Multiple Inheritance
class DerivedC : visibilty-mode1 base1 , visibility-mode2 base2 {

    class body of class "DerivedC"
}; */

class Base1 {
    protected:
        int base1int;
    public:
        void setbase1int(int a){
            base1int = a;
        }
};

class Base2 {
    protected:
        int base2int;
    public:
        void setbase2int(int a){
            base2int = a;
        }
};

class Derived : public Base1 , public Base2 {  // 🚀
    public:
        void show(){
            cout<<"The value of base1int is "<<base1int<<endl;
            cout<<"The value of base2int is "<<base2int<<endl;
            cout<<"The sum these values "<<base1int + base2int<<endl;

        }
};

int main(){

        Derived harry;
        harry.setbase1int(45);
        harry.setbase2int(5);
        harry.show();

    return 0;
}

/* 🔥 M.I.P 🔥
For a protected member:
                            Public derivation  Private derivation  Protected derivation 
    1. Private members        Not Inherited      Not Inherited        Not Inherited                                           
    2. Protected members      Protected           Private             Protected                                          
    3. Public members          Public             Private             Protected                                                  

*/