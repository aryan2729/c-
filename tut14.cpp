#include<iostream>
using namespace std;

/* STRUCTURE --> It allow us to group items of possibly 
different data types into a single type.   
// which we can't do in array in c++ I.M.P🔥*/

struct employee 
{
    int eId;
    char favChar;
    float salary;

};   // semi-coloumn struct & class

/* UNION --> In union all its members share the 
same memory location . This means that only one member
can be stored at a time, and assigning a value to
one member will automatically deallocate the  previous
member stored in the memory, which may lead to loss of data */ 
// it's means only 1 value shown correct other shown garbage value cuz ur memory is sharing .


union money
{
    int rice;
    char car;
    float pounds;
};


int main(){

    struct employee harry;
    harry.eId=1;
    harry.favChar='c';
    harry.salary=120000;

    cout<<"The value of harry eId is "<<harry.eId<<endl;
    cout<<"The favChar of harry is "<<harry.favChar<<endl;
    cout<<"The salary of harry is  "<<harry.salary<<endl;


    union money m1;
    m1.rice = 34;
    m1.car='b';

    //cout<<m1.rice<<endl; // if u print something first its correct value shown nd keep in mind its not printed below . 
    cout<<m1.car<<endl;
    cout<<m1.rice<<endl; // here if u print another thing after first printed already  then this provide wrong value or garbage value . 

    
    
    // Enum --> Enums are used in C++ to assign names to integral constants. 

    enum Meal{ breakfast, lunch, dinner}; // it allocate breakfast -0 , lunch -1 and dinner -2

    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
    return 0;
}
