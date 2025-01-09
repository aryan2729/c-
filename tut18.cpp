#include<iostream>
using namespace std;

// I.M.P🔥

// (Recursion)🔥 --> When a function calling itself .
int factorial(int n){   // factorial func 
    if (n){      // n<=1   | but we can't go -ve int
        return 1;
    }
    return (n* factorial(n-1));  // n* factorial(n-1)--> repeat function repeat until 1 
}

int fibonacci(int m){
    if (m<2 ){
        return 1;
    }
    return fibonacci(m-2) + fibonacci(m-1) ;   
}
// fib(5) 
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(1) and so on 



int main(){
    // Factorial of a number :
    // 6! = 6*5! = 6*5*4! = 6*5*4*3! = 6*5*4*3! = 6*5*4*3*2! = 6*5*4*3*2*1 = 720

    cout<<"Enter a number for factorial"<<endl;
    int a;
    cin>>a;
    cout<<"The facorial of "<<a<<" is "<<factorial(a)<<endl;

    // Step by step calaculation for factorial(4)
    // Factorial(4)= 4* factorial(3) 
    // Factorial(4)= 4*3* facorial(2)
    // Factorial(4)= 4*3*2*1 
    // Factorial(4)= 24 
 

    int b ; 
    cout<<"Enter a number for fibonacci seq"<<endl;
    cin>>b;
    cout<<"The term in fibonacci sequence at position "<<b<<" is "<<fibonacci(b)<<endl;
 
    
 
    return 0;
}