#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int a = 3;
    cout<<"The value of a was: "<<a<<endl;
    a = 5; 
    cout<<"The value of a is: "<<a<<endl;

    // Constant in c++ ~I.M.P.🔥
    const int b = 4; 
    cout<<"The value of b was: "<<b<<endl;
    //b = 5;  u'll get an error  cuz b is constant 


    // Manipulators in C++ ~I.M.P🔥 --> two --> endl , setw
    int c = 4 , d= 45 , e = 4566;
    cout<<"The value of c without setw is: "<<c<<endl;
    cout<<"The value of d without setw is: "<<d<<endl;
    cout<<"The value of e without setw is: "<<e<<endl;
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl; 
    cout<<"The value of d with setw is: "<<setw(4)<<d<<endl;
    cout<<"The value of e with setw is: "<<setw(4)<<e<<endl;
    //setw(4)-> create 4 space for number and make look good 


    // Operator Precedence & Associativity ~I.M.P🔥
    /*first check from chart for precedence that  check 
    precedence if same then check associativity and 
    which comes first make in bracket then do for all 
    remains */

    int f = 43 , g = 5;

    int h = ((((5*f)+g)-45)+4) ;
    cout<<h;



    





    return 0;
}
