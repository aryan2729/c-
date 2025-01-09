#include<iostream>
using namespace std;

//🔥 Template with Multiple Parameters (m.i.p)

/*
template <class  T1 , class T2>
class nameofclass{
// body 
}
*/

template <class T1 , class T2>  //🚀
class myclass{
    public:
        T1 data1;
        T2 data2;
        myclass(T1 a , T2 b){  // constructor 
        data1 = a;
        data2 = b;
        }
        void display(){
            cout<<data1<<endl<<data2<<endl;
        }
};
int main(){

    myclass<int , char> obj(1 , 'C');  // 🚀
    obj.display();

    myclass<float, int > obj1(1.49,55);
    obj1.display();

    return 0;
}