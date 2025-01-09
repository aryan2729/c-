#include<iostream>
using namespace std;
// Hard example for previous 2 videos 
class c2;

class c1 {
    int val1; // default pvt;
    friend void exchange(c1 & , c2 &); // 🚀

    public:
        void inData(int a){
            val1 = a;
        }

        void display(void){
            cout<<val1<<endl;
        }

        
};

class c2 {
    int val2; 
    friend void exchange(c1 & , c2 &); // 🚀
    
    public:
        void inData(int a){
            val2 = a;
        }

        void display(void){
            cout<<val2<<endl;
        }
};

/*Trick to swap two numbers a and b 
 temp = a ;
 a = b;
 b = temp;
 */

void exchange( c1 & x , c2 & y){  //🚀 swaping by call by Reference using C++ tut16.cpp
    int temp = x.val1 ;
    x.val1 = y.val2 ;
    y.val2 = temp ;

}
int main(){
    c1 oc1;
    c2 oc2; // object make 

    oc1.inData(34);
    oc2.inData(56);

    exchange(oc1,oc2); 

    cout<<"The value of c1 after exchange : "<<endl;
    oc1.display();
    cout<<"The value of c2 after exchange : "<<endl;
    oc2.display();

    return 0;
}