#include<iostream>
using namespace std;

//🔥 Initialization list in Constructors 

/* 
🚀Syntax for initialization list in constructor:

constructor (argument-list) : initialization-section{
 assignment + other code 
}
*/

class Test{
        int a, b; // pvt default 

    public:
        Test(int i , int j) : a(i) , b(j) {   //🚀 it's just a=i and b=j make more easy in constructor 
            cout<<"Constructor executed "<<endl;
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
        // if 
        // Test(int i , int j) : a(i) , b(i+j){}   work ✅
        // Test(int i , int j) : a(i) , b(2 * j){} work ✅
        // Test(int i , int j) : a(i) , b(a + j){} work ✅
        // Test(int i , int j) : b(j) , a(i + b){} Not-work ❌ -> cuz in pvt a assigned first then b so a will must in constructor comes first to execute first ..
        // Test(int i , int j) {                   work ✅
        // a = i ;
        // b = j; }
};

int main(){

    Test hy(4,6);

   
    return 0;
}
