#include<iostream>
using namespace std;

//🔥 Pointer to Derived class (m.i.p)

class BaseClass {
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base Class variable var_base :"<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base Class variable var_base: "<<var_base<<endl;
            cout<<"Displaying Derived Class variable var_derived: "<<var_derived<<endl;
        }
};

int main(){

    BaseClass *base_class_pointer;  //🚀 base class pointer
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = & obj_derived; //🚀 base class pointer point to derived class object

    base_class_pointer->var_base=34;            //  directly give value cuz public
    // base_class_pointer->var_derived=123;     //🚀 Give Error cuz with base_class_pointer u can access only base class functions/data-members
    base_class_pointer->display();              //🚀 it will run base_class display not derived class cuz reason above line comment ..
    

    DerivedClass *derived_class_pointer;
    derived_class_pointer = & obj_derived;
    derived_class_pointer->var_base = 100;    // we can't give value by base_class_pointer to derived class varibale but we can give if derived class pointer used to give base class variable value 
    derived_class_pointer->var_derived = 50;
    derived_class_pointer->display();    

    return 0;
}