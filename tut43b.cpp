#include<iostream>
using namespace std;

// first see previous code tut43.cpp & this is not example of ambiguity 

class B {
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D : public B{
    // D's new say() method will override base class's say()
    public:
        void say(){
            cout<<"Hello world 124"<<endl;
        }
};

int main(){

    class B b;
    b.say();
    class D d;
    d.say(); // 🚀here object calling his derived class function not base class .. 
    return 0 ;
}