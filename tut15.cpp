#include<iostream>
using namespace std;

//M.I.P--ALL 🔥

/* function--> Functions  are blocks of code that can be called multiple
times from different parts of a program. They allow for code reuse, modularity,
and easier maintenance. */

/* Always put function above the main file cuz first compiler find main file but
if u want to use function below main file then u need to use (Function Prototypes)
above the main file which tell compiler that function is present in code so comp find it :)   & never add function in mddle of main file 00 give error */


// Function-Prototype 
// type function-name (arguments); 
int sum(int a , int b);  // --> Accestable✅  Now this will tell compiler that function present in code so look (after main file) if u can't above get it  otherwise it give error 
// int sum(int a,b;)        --> Not Accestable❌
//int sum(int , int );      --> Accestable✅

void g();  // void function k liya function-prototype ...

int main(){
    int num1 , num2;
    cout<<"Enter the first number "<<endl;
    cin>>num1;
    cout<<"Enter the second number "<<endl;
    cin>>num2;
    // num1 and num2 are (Actual Parameters)
    cout<<"The sum is "<<sum(num1,num2)<<endl;

    g(); // using void function here in main  

    return 0;

    
}

    // function (after main) -- it's work cuz u already written function prototype above main file 
int sum(int a, int b){   
    int c = a + b ; 
    // (Formal Parameters a and b) will taking values from (Actual Parameters num1 and num2) . 
    return c;
}    

    // is we really matter to wright return or int everytime if u want to just print -- use void function 
void g(){         // but we still want to declare function-prototype for void function above main  & keep in mind ur first int for fcn must in same line of main int .... 
    cout<<"\nHello , Good Morning ";
    }
    


    // >>>>  it's better to write whole function before main file cuz then u don't need to write function-prototypes 
    // >>>> in void function we don't need to write the return in below ...

