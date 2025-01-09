#include<iostream>
using namespace std;

//🔥 this pointer (m.i.p)
// -> local variable and global variable when have the same name,then there is use of (this pointer). 

class A{
    int a ;
    public:
        void setData(int a){
            // a = a ❌ wrong | The first a we used for is the object, and the second we use for is the local variable. This is thing which we know, but how will compiler know?
            this->a = a;  //🚀 ✅ correct | With the help of this inbuilt pointer, the compiler gets to know that, woah this person defined the first a as the variable of the object and the second variable as the local variable. | & in c++ local varibale got priority then global ..
                 
        }

        A & setDatareturn(int a){  
            this->a = a;
            return *this;      //🚀 Here the returning helps to send us the same object for further to be used by the chains of function.
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    // this is a keyword which is pointer which points to the object which invokes the member function 
     A a;
     a.setData(4);
     a.getData();

    a.setDatareturn(5).getData(); //When we need to chain the member functions of the class for the same object | use of return make it feel like object .
                                  // Also known as - to return reference to the calling object. 
                                  // • Why we use? 
                                  // - So that we can chain functions. And send the reference. 
       return 0;
}