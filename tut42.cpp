#include<iostream>
#include<cmath>
using namespace std;

// ( Exercise )

// You have to create 2 classes:
// SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
// ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your chioice and displays the results using another function.
// Create another class HybridCalculator and inherit it using these 2 classes
// Also, answer the questions given below.
// What type of Inheritance are you using? --> Multiple inheritance 
// Which mode of Inheritance are you using? --> public SimpleCalculator , public ScientificCalculator 
// Create an object of HybridCalculator and display results of simple and scientific calculator.
// How is code reusability implemented?



class SimpleCalculator {
        int a,b; // pvt default

    public:
        
        void getDataSimple(){
            cout<<"SimpleCalculator:"<<endl;
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performOperationsSimple(){

            cout<<"The value of a + b is "<< a + b<<endl;
            cout<<"The value of a - b is "<< a - b<<endl;
            cout<<"The value of a * b is "<< a * b<<endl;
            cout<<"The value of a / b is "<< a / b<<endl;

        }
};

class ScientificCalculator{
        int a,b; // pvt default

    public:
        void getDataScientific(){
            cout<<"\nScientificCalculator:"<<endl;
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performOperationsScientific(){
            cout<<"The value of sin(a) is "<< sin(a)<<endl;
            cout<<"The value of cos(b) is "<< cos(b)<<endl;
            cout<<"The value of exp(a) is "<< exp(a)<<endl;
            cout<<"The value of tan(a) is "<< tan(a) <<endl;

        }

};

class HybridCalculator : public SimpleCalculator , public ScientificCalculator{

};


int main(){

    HybridCalculator calc ;
    calc.getDataSimple();
    calc.performOperationsSimple();
    calc.getDataScientific();
    calc.performOperationsScientific();

    return 0;
}