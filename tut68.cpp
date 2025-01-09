#include<iostream>
using namespace std;

//🔥 Member Function Templates & Overloading Template Functions

template <class T>

class Harry{
public:
    T data;

    Harry(T a){  // constructor 
        data = a;
    }

    void display();  //🚀 not full function go to below class harry
};

template <class T>             // 🚀
void Harry<T> :: display(){    // 🚀 full function with template involed
    cout<<data<<endl;
}



// for overloading 
void func(int a){
    cout<<"I am first func()"<<endl;
}

template < class T>
void func(T a){
    cout<<"I am templatised func()"<<endl;

}



int main(){

        Harry<int> h(4);
        cout<<h.data<<endl;
        h.display();


        func(4); // Exact match takes the highest priority 
        

    return 0;
}


