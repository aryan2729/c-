#include<iostream>
using namespace std;

// 🔥 Single Inheritance

class Base{
    int data1; // Private by default and is not inheritable 

    public:
        int data2; 
        void setData(); // function only declaration line wise 3 
        int  getData1();
        int  getData2();
};

void Base :: setData(void){
    data1 = 10;
    data2 = 20;
}

int Base :: getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

class Derived : public Base{ // class is being derived publically 
    
    int data3; // defualt pvt 

    public: 
        void process(); // function declaration only line wise 2
        void display(); 

};

void Derived :: process(){  
    data3 = data2 * getData1() ;   // 🪐 whenever we wanted to access data1 we must use getData1() cuz pvt member of base class never inherited 
}

void Derived :: display(){
    cout<<"Value of data1 is "<<getData1()<<endl;
    cout<<"Value of data2 is "<<data2<<endl;
    cout<<"Value of data3 is "<<data3<<endl;
}

int main(){

    Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}