#include<iostream>

using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<< glo;
}
int main(){
    int glo = 9;
    glo = 78;
    // int a = 4;
    // int b = 5;
    int a = 4 , b = 5;
    float pie = 3.14;
    char c = 'a';
    bool is_true = false;
    sum();
    cout<<glo<< is_true;  //🔥 local and global varibal can be same variable but {{ precedence is local variable aganist of global !!}}
        //~IMP✅  :: is called (scope resolution operator) which use global variable instead of local 


    // cout<<"This is tutorial 4. Here the value of a is "<<a<<"\n and value of b is "<<b ;
    
    // cout<<"\nThe value of pie is "<<pie<< "\nThe character c is "<<c;
    return 0;
}


//  this code - variables &  \n is used to provide a line gap 
