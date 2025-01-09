#include<iostream>
#include
using namespace std;

/* Friend Function --> Friend functions are those functions that have the right 🔥
to access the ( private data members ) of class even though they are not defined 
inside the class. It is necessary to write(define) the prototype of the friend function. 
One main thing to note here is that if we have written(define) the prototype for the friend 
function in the class it will not make that function a member of the class.
*/

class Complex{
    private:
        int a , b;
    
    public:
        void setNumber(int n1 , int n2){
            a = n1;
            b = n2;
        }

        friend Complex sumComplex(Complex o1 , Complex o2);  // 🚀 friend function define only ...| it will not make that function a member of the class.


        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1 , Complex o2){ // 🚀 friend function using pvt member outside class ...

    Complex o3; 
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}



int main (){

    Complex c1 , c2 , sum;
    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(5,8);
    c2.printNumber();

    sum = sumComplex(c1 , c2);
    sum.printNumber();


    return 0;
}

/* Properties of Friend functions 
1. Not in the scope of class .
2. Since it is not in scope of the class  , it cannot be called from the objects of the class . c1.sumComplex() == invalid
3. Can be invoked without the help of any object . 
4. Usually contains the objects as arguments .  
5. Can be declared inside public or private section of the class . 
6. It cannot be access the members directly with their names and need object_name.member_name to access any member.
7. :: --> This is called scope resolution operator 
*/ 