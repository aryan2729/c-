#include<iostream>
using namespace std;

//🔥 Static Data members & Methods in C++ 

// as we know in class every variable have copy in every object so , we declare static which help us to make only single copy of data member(variable) which shared between all the objects(harry etc) in the class . 

class Employee{

    private:
        int id;   
        static int count; // 🪐 When a static data member is created, there is only a single copy of the data member which is shared between all the objects(harry etc) of the class. 
                        // static member default value -> 0 . 
    public:
        void setData(void){
            cout<<"Enter the id "<<endl;
            cin>>id;
            count++; // here we increment cuz count is static which store single copy in all objects so 1 by 1 increase when u run this  
        }
        void getData(void){
            cout<<"The id of the employee is "<<id<<" and this is employee number "<<count<<endl;
        }

        static void getCount(void){   // static functions 🚀 | Not required object to run this ..
            // cout<<id; ~ throws error 
            cout<<"The value of count is "<<count<<endl;
        }

//         Two properties of static functions are:🔥
// 1> They can access static data members only(not id above )
// 2> They can run without making any object for the class

};   


int Employee :: count; //🪐 we've to initalize static member also after class .
// int Employee :: count = 100; --> if u want to start static count by 100 value | otherwise default value is 0; 
// count is the static data member of class Employee 🏴‍☠️

int main(){

    Employee harry,rohan , lovish ;
    
    harry.setData();
    harry.getData();
    Employee :: getCount(); // This is Run (static function)  |  We don't need object to run this ....🚀

    rohan.setData();
    rohan.getData();
    Employee :: getCount();

    lovish.setData();
    lovish.getData();
    Employee :: getCount(); 
    

    return 0;
}



// Static local variable = class variables
// Visibility: class
// Lifetime: till termination of program
// Default value:0
// Storage:heap

// Local Variable
// Visibility: class
// Lifetime: until execution of class
// Default value:garbage eg -> (393901930)
// Storage:stack

// Global variable
// Visibility: file
// Lifetime: till termination of program
// Default value:0
// Storage:heap