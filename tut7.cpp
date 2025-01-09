#include<iostream>
using namespace std;

int c = 45; // (global c)

int main()
    //************** BUILD IN DATA TYPE **************
{   int a , b , c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a + b ;

    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c;   
    /*~IMP✅  :: is called (scope resolution operator) which use global variable instead of local variable */            cout<<endl;


    //************** FLOAT , LONG DOUBLE LITERALS **************

    float d = 34.4f;   // use f always when writing float it tells that it is float (f or F)                             
    long double e = 34.4l;   // l represent long double (l or L)

    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;


    //************** REFERENCE VARIABLE **************

    // Rohan das ---> Rohu ---> Rohu coder 
    float x = 455;    
    float & y = x;     // variable ak he h bus uske alag alag name bna diya h ~ IMP ✅
    cout<<x<<endl;
    cout<<y<<endl;


    //************** TYPECASTING ************** 
    // change one datatype into another  ~IMP✅

    int z = 45;
    float n = 34.56;

    cout<<"The value of z is "<<float(z)<<endl;
    cout<<"The value of n is "<<int(n)<<endl;
    int m = int(n);







    return 0;
}
