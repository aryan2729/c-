#include<iostream>
using namespace std;

//🔥 Constructor in Derived Class (m.i.p)

/* M.I.P(🪐)
Case 1:
Class B : public A {
    //Order of execution of Constructor --> First A() then B()
};

Case 2:
Class A : public B , public C{
    // Order of execution of Constructor -->  B() then C() then A()
};

Case 3:
Class A : public B , virtual C {
    // Order of execution of Constructor --> C() then B() then A()
};
*/

class Base1{
    int data1; // pvt default 

    public:
        Base1(int i ){ //🚀 paramaterized constructor 
        data1 = i;
        cout<<"Base1 class Constructor called! "<<endl;
        }

        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }

};

class Base2{
    int data2;

    public:
        Base2(int i){ //🚀 paramaterized constructor 
        data2 = i;
        cout<<"Base2 class Constructor called !!"<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class Derived : public Base1 , public Base2{
    int DerivedData1; // pvt default 
    int DerivedData2;

    public:
        Derived(int a , int b ,int c , int d) : Base1(a) , Base2(b) {//🚀🚀 Derived  Constructor including base classes and also derived how represent 
            DerivedData1= c;
            DerivedData2= d;
        }
        void printDerivedData(void){
            cout<<"The value of DerivedData1 and DerivedData2 is "<<DerivedData1<<" & "<<DerivedData2<<endl;
        }
};

int main(){
        Derived Harry(1,2,3,4);

        Harry.printDataBase1();
        Harry.printDataBase2();
        Harry.printDerivedData();

    return 0;
}

/*🔥Syntax
Derived-Constructor (arg1, arg2, all make ): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4){
............. 
}

first in derived-constructor make all arguments for all constructor then : after this 
write base class name then arguments which belongs to constructor of that base class 
and same for other base class
 */