#include <iostream>
using namespace std;

int main(){
    /*Loops in C++: ~I.M.P🔥
    There are three types of loops in c++
    1. For loop
    2. While loop
    3. Do-While loop
     */

    /* For Loop */

    // syntax
    // for(initialization; condition; updation){
    //     loop body(c++)
    // }

    for (int i = 0; i <= 100; i++)
    {
        cout << i << endl;
    }

    /* While Loop */
    
    // syntax
    // while(conditon){
    //     c++ statements;
    // }

    int j=1;
    while(j<=40){
        cout<<j<<endl;
        j++;
    }

    // Infinite while loop
    // int k = 0;
    // while(true){
    //     cout<<k<<endl;
    //     k++;
    // }

    /* Do-While loop */
    //syntax
    // do{
    //     c++ statements
    // }while(condtion);
    
    int p=1;
    do{
        cout<<p<<endl;
        p++;
    }while(p<0); // it work one time atleast if conditon false

    return 0;
}