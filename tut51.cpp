#include <iostream>
using namespace std;

//🔥 Pointers to Objects & Arrow Operators (I.M.P) 

/* As discussed before pointers are used to store addresses of variables
which have data types like int, float, double etc. But pointer can also
store the address of an object .  The arrow operator (->) in C/C++ is
used to access members (variables, methods) of a structure or class
through a pointer. */

class Complex
{
private:
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData(void)
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main(){          
        // Complex c1;
        // Complex *ptr = &c1;  | this is lengthy so we use below code

        Complex *ptr = new Complex;  //🚀 Pointers of objects 
        
        //(*ptr).setData(1,52);      // is exactly same as below
        ptr->setData(2,43);              // 🚀 Used -> Arrow operator in pointer | use many times in future


        //(*ptr).getData();          // same as below ans same | prefer below ✅
        ptr->getData(); 
        






    return 0;
}
