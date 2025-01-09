#include<iostream>
using namespace std;
// previous video example M.I.P🔥

class Y; // forward declaration -> comiler read up to down and see u used add(X , Y ) but in X class so u need to put this first 

class X{
    int data ; // default pvt;

    public :
        void setValue(int value){
            data = value;
        }
    
    friend void add(X , Y); // 🚀 go previous code for comments
};

class Y{
    int num; 

    public:
        void setValue(int value){
            num = value;
        }

    friend void add(X , Y) ;

};

void add( X o1 , Y o2 ){ // 🚀 Here from X we making o1 and Y o2

    cout<<"Summing data of X and Y is "<<o1.data + o2.num <<endl; // using pvt 
}


int main(){

    X a1;
    a1.setValue(4);

    Y b1;
    b1.setValue(5);

    add(a1 , b1);

    return 0;
}