#include<iostream>
using namespace std;

/*🔥 Protected access modifiers -> are similar to the private access modifiers 
but protected access modifiers can be accessed in the derived class whereas 
private access modifiers cannot be accessed in the derived class. */

class Base {
    protected: // 🚀  is same like pvt but it can be inherited 
        int a ;
    private:
        int b ;
};

/* 🔥 M.I.P 🔥
For a protected member:
                            Public derivation  Private derivation  Protected derivation 
    1. Private members        Not Inherited      Not Inherited        Not Inherited                                           
    2. Protected members      Protected           Private             Protected                                          
    3. Public members          Public             Private             Protected                                                  

*/

class Derived : protected Base{

};

int main(){

    Base b;
    Derived d;
    // cout<<b.a<<endl; 🪐 will not work since a is protected in both base as well as derived class . 



    return 0;
}