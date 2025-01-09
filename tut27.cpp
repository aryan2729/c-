#include<iostream>
using namespace std;

//🔥 Friend Classes & Member Friend Function 🔥

/* Friend classes are those classes that have permission
to access private members of the class in which they
are declared. The main thing to note here is that if
the class is made friend of another class then it can
access all the private members of that class. | Comp= complex ,  Real=Real
*/

//🔥 Forward Declaration --> we've to tell compiler that forward we've Complex class 
class Complex; // this is forward declaration...

class Calculator{
    
    public:
        int add(int a , int b ){
            return (a+b);
        }
        
        int sumRealComplex(Complex , Complex ); //🚀 Only declaration function cuz if we add here o1.a or o1.b then compiler think ok u tell me we've forward Complex class but not sure about o1.a or o2.a so only declaration we write whole function after Complex class :)  
        int sumCompComplex(Complex , Complex); // same_as_above_comment..

};

class Complex{
    
    private:
        int a , b;

        // Individually declaring functions as friends
        // friend int Calculator :: sumRealComplex(Complex , Complex); // 🚀 Here we're allowing class Calculator to use Complex class private data to use in sumRealComplex function  
        // friend int Calculator :: sumCompComplex(Complex , Complex); // same_comment_as_above...
        
        // Aliter --> Declaring the entire Calculator class as friend 🔥
        friend class Calculator; // U Declared whole class as friend. 

    public:
        void setNumber(int n1 , int n2){
            a=n1;
            b=n2;
        }


        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

int Calculator :: sumRealComplex(Complex o1 , Complex o2){ //🚀 now we declared full function | we can't declared full this on Calculator class cuz it occuping Complex class pvt variable so , we've to first declare Complex class; this then Second in calculator class declaration only then now third here after Complex class so compiler will understand it properly ... 
    return (o1.a + o2.a);
}

int Calculator :: sumCompComplex(Complex o1 , Complex o2){ // same as above comment...
    return (o1.b + o2.b);
} 

int main(){
    
    Complex o1 , o2 , o3 ;
    o1.setNumber(1,4);
    o2.setNumber(5,7);

    Calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part of complex number is "<<res<<endl;

    int resc = calc.sumCompComplex(o1,o2);
    cout<<"The sum of complex part of complex number is "<<resc<<endl;


    return 0;
}