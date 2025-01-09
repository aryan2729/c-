#include<iostream>
using namespace std;

// M.I.P ~ critical 🔥
// Function can be call by two process call by value and call by reference 


// ( Call by Value )--> This will not swap a and b |  In case of call by value the copies of actual parameters are sent to the formal parameter, which means that if we change the values inside the function that will not affect the actual values.
void swap(int a, int b){    //temp  a  b 
    int temp = a;           //4    4  5
    a = b;                  //4    5  5
    b = temp;               //4    5  4 
}

// ( Call by Reference using Pointers )
void swapPointer(int* a , int* b){
    int temp = *a;
    *a=*b;
    *b= temp;
}

// ( Call by Reference using C++ reference Variables )
void swapReferenceVar(int &a , int &b ){
    int temp = a;
    a=b;
    b= temp;
}


int main (){
    int x= 4, y = 5;
    
    // call by value cout & calling

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(x,y);  //This will not swap a and b
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    

    // call by reference using pointers cout & calling
    int m = 4,n=5;

    cout<<"The value of m is "<<m<<" and the value of n is "<<n<<endl;
    swapPointer( &m , &n); // This will swap m and n using poitners reference 
    cout<<"The value of m is "<<m<<" and the value of n is "<<n<<endl;


    // call by reference using C++ reference variables cout & calling 
    int p = 4 ,q = 5;

    cout<<"The value of  p is "<<p<<" and the value of q is "<<q<<endl;
    swapReferenceVar(p , q); // This will swap p and q using reference variables 
    cout<<"The value of  p is "<<p<<" and the value of q is "<<q<<endl;

    return 0;
}