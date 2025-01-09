#include<iostream>
using namespace std;

//🔥 Inheritance Syntax & Visibility Mode (: -> colan)

// Base class
class Employee{
    public:
        int id ;
        float salary;
        Employee (int inpId){ // constructor 
            id = inpId;
            salary = 45;

        }
        Employee (){} // Default constructor | 🪐we always need default constructor while u wanna inheritance use 

};

//🚀 Derived class syntax 🚀                                                                
/* class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}        
{
    class members/methods/etc/
}; 
Notes 🔥m.I.p🔥
1. Default visibilty mode --> private | (if visibilty-mode empty).
2. Public visibity mode : Public members of base class becomes Public member of derived class . 
3. Private visibilty mode : Public members of base class becomes Private member of derived class. 
4. Private members are never Inherited . */
 
class Programmer : public Employee{    // 🚀 derived class 
    public:
        int languageCode;

        Programmer(int inpId){ // constructor | id  inherit  from employee base class
            id = inpId;
            languageCode = 9;
        }

        void getData(){ // function 
            cout<<id<<endl;
        }
};


int main(){

    Employee harry(1), rohan(2);

    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();

    return 0;
}


// Notes 🔥m.I.p🔥
// 1. Default visibilty mode --> private | (if visibilty-mode empty).
// 2. Public visibity mode : Public members of base class becomes Public member of derived class . 
// 3. Private visibilty mode : Public members of base class becomes Private member of derived class. 
// 4. Private members are never Inherited . */