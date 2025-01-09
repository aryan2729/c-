#include<iostream>
using namespace std;

/*🔥 Function Overloding --> Function overloading is a process to make more than one function 
with the ( same name ) but different parameters, numbers, or sequence. */

int sum(int a , int b ){
    cout<<"Using function with 2 arguments "<<endl;
    return a + b;
}

int sum(int a , int b , int c){
    cout<<"Using function with 3 arguments "<<endl;
    return a + b + c;
}


// Calculate the volume of cylinder
int volume(double r , int h ){
    return ((22/7)*r*r*h);
}

//Calculate  the volume of cube 
int volume(int a){
    return (a*a*a);
}

// Calculate the volume of Rectangular box
int volume(int l , int b , int h){
    return (l*b*h);
}

int main (){

    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3 , 7 and 6 is "<<sum(3,7,6)<<endl;

    cout<<"\nThe volume of cylinder of 3 and 7 is "<<volume(3,7)<<endl;
    cout<<"The volume of cube of 3  is "<<volume(3)<<endl;
    cout<<"The volume of Rectangular box of 3 , 5 and 7 is "<<volume(3,5,7)<<endl;


    return 0;
}