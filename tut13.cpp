#include<iostream>
using namespace std;

int main(){

    // Array Example ~ M.I.P🔥
    // array is used to store same type of data type which is large in number .... 

    // int marks[4]={23,45,64,78}; same as below 
    int marks[]= {23,45,64,78}; // array automatically define total capacity
    // above indexing 0,1,2,3

    int MathMarks[4]; // here u define total capacity if u want to make array in future 
    MathMarks[0]=223;
    MathMarks[1]=523;
    MathMarks[2]=345;
    MathMarks[3]=233;

    cout<<"These are MathMarks"<<endl;
    cout<<MathMarks[0]<<endl;
    cout<<MathMarks[1]<<endl;
    cout<<MathMarks[2]<<endl;
    cout<<MathMarks[3]<<endl;

    // You also can change the value of an array 
    marks[2]=34;
    cout<<"These are marks "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;

    
    // Arrays in loops

    // FOR LOOP 
    int array_loop1[4] = {2,5,7,9}; // array in which 4 is total capacity and index->0,1,2,3
    for (int i = 0; i <4; i++)
    {
        cout<<"The value of array_loop "<<i<<" is "<<array_loop1[i]<<endl;

    }

    // WHILE LOOP 
    int array_loop2[3]={2,5,8};
    int j = 0; 
    while (j<3){ 
        cout<<"The value of array_loop2 "<<j<<" is "<<array_loop2[j]<<endl;
        j++;
    }

    // DO-WHILE LOOP 
    int array_loop3[5] = {10,20,30,40,50};
    int k = 0;
    do{
        cout<<"The value of array_loop3 "<<k<<" is "<<array_loop3[k]<<endl;
        k++;
    } while (k<5);


    // POINTERS and Arrays ~ M.I.P 🔥
    int marks1[]={2,34,23,5}; //array
    
    int*p = marks1;  // pointer and here &marks1 not required cuz it's array ...
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    cout<<*(p++)<<endl; // first print then increment 
    cout<<*(++p)<<endl; // p = 34 already now increment so p =23
    

    
    return 0;
}
