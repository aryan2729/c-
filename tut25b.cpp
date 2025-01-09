#include<iostream>
using namespace std;

//🔥 Passing objects as functions 

class complex{

    int a , b; // default both private:

    public:
        void setData(int v1 , int v2){
            a = v1 ;
            b = v2;
        }

        void setDataBySum(complex o1 , complex o2 ){

            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printData(void){
            cout<<"Your complex number is "<<a<<" + "<<b<< "i"<<endl;

        }
};

int main(){
        complex c1,c2 ,c3;  // we've created 3 complex no. ,  set data by pvt use then here printData & at the end we sum c1 and c2 complex just 

    c1.setData(1,3);
    c1.printData();

    c2.setData(2,4); // here we taking numbers like in function --> Passing object as functions..
    c2.printData();

    c3.setDataBySum(c1,c2);
    c3.printData();

    return 0;
}