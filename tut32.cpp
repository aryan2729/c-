#include<iostream>
using namespace std;

// 🔥 Constructors with default arguments 

class Simple {
    private:
        int data1;
        int data2; 
        int data3;

    public:

        Simple(int a , int b = 4 , int c = 9){ // same aS default argument in function --> but keep in mind int a always without value write first. 
            data1= a;
            data2= b;
            data3= c;
        }

        void printData();
};

void Simple :: printData(){
    cout<<"The value of data1 , data2 and data3 is "<<data1<<" , "<<data2<<" and "<<data3<<endl;        
}

int main(){

    Simple s(1,2); // a = 1 and b = 2 and c same as written 
    s.printData();

    Simple q(1); // here a = 1 , and b or c same written 
    
    q.printData();

    return 0;
}