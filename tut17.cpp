#include<iostream>
using namespace std;

// M/I/P🔥 
// ·INLINE FUNCTION --> Only use this function when very less work need to done , inline functions are used to reduce the function call. When one function is being called multiply times in the program it increases the execution time, so inline function is used to reduce time and increase program efficiency. 
// Don't use inline function for big(work) function like  static , loops , switch statemets ...

inline int product(int a , int b ){  // small work inlne function works ...
    return a*b;

}

// int productwithoutinline(int c , int d){ // can't use here inline function 
//     static int c =0;                     // This execute only once 
//     c = c + 1 ;                          // Next time this function is run , the value of c will be retained 
//     return c;}


/* ·DEFAULT ARGUMENTS --> It is already in function formal parameters in which one is already assigned 
and the other need to input but if we want  to change the present default argument then we need to 
write input both values in asusual function(__,__) both values */

float moneyReceived(int currentMoney , float interest = 1.04){  //✅ default arguments -> interest :) & always write default arguments after int ___ ,
    return currentMoney* interest;
}

// float moneyReceived(float interest = 1.04 ,int currentMoney ){   //❌Incorrect cuz u can't write default argument first 
//     return currentMoney* interest;
// }


// ·CONSTANT ARGUMENTS --> U don't want to change 
// int argumentConstant(const char *p){
    
// }


int main(){
    int a ,b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;    
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in you bank account , you will recieve\n"<<moneyReceived(money)<<endl;  // here default argument so , only one argument need . 
    cout<<"If you have "<<money<<" Rs and you're a VIP , you will recieve\n "<<moneyReceived(money, 1.1)<<endl;  // u can changed the default argument value 

    
    




    
    return 0;
}
