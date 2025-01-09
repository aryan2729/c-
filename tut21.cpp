#include<iostream>
using namespace std;

// OOP - Class

class Employee {
    
    private:
     //Private variables accessible only with the help of function.
        int a , b ,c ;  // private class members
    
    public :   
        int d , e ;  // public class members
        void setData(int a1 , int b1 , int c1 ); // only Declaration ~ function further points provide future  in code down 
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};  // (here must semi-coloum) cuz in function we cant use semi coloum on curly brackets 

 
void Employee :: setData(int a1 , int b1 , int c1){   //  ::  --> Scope Resolution Operator...🪐

    a = a1;
    b = b1;
    c = c1;
}

int main(){

    Employee harry;
    harry.d= 34;
    harry.e= 58;
    // harry.a = 20; --> This 'll give error cuz a  is private u can't define like this must use function to define 
    
    harry.setData(2,3,4);
    harry.getData();

    return 0;
}



