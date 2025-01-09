#include<iostream>
using namespace std;

//🔥 Class Templates with Default Parameters--> but defualt parameter only work when we don't pass from ourside in main 

template <class T1 = int , class T2 = float ,class T3 = char>  //🚀 defualt parameter
class Harry{
    public: 
        T1 a;
        T2 b;
        T3 c;
        Harry(T1 x  , T2 y , T3 z){  // constructor
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};
int main(){
        // 🪐when we dont't pass anything it's default work
        Harry<> obj1(3,5.944,'C');
        obj1.display();

cout<<endl;
        // 🪐when we pass own parameter it's default not work now 
        Harry<string , float , int> obj2("Aryan",2.444,19);
        obj2.display();



    return 0;
}