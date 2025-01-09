#include<iostream>
using namespace std;
 
int main (){

    // What is Pointers--> Data type which hold the address of 
    // other data type .

    int a = 3;
    int* b =&a; // Declearing pointer          

    // & --> (Address of) operator 
    cout<<"The address of a is "<<&a<<endl; // &--> ampercent
    cout<<"The address of a is "<<b<<endl;

    // * --> (Value at ) Dereference operator 
    cout<<"The value at address b is"<<*b<<endl;  // if star k badh pointer variable rakh de toh vo kon se value store karta h bateyaga 

    // pointer to pointer 
    int** c = &b;
    cout<<"The address of  b is "<<&b<<endl;
    cout<<"The address of  b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c) is) "<<**c<<endl;


    return 0;
}