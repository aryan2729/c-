#include<iostream>
using namespace std;

//🔥 Revisiting Pointers: New and delete keyword 
// Pointers are variables that are used to store the address.
// * --> value at  |  & --> address of
 
int  main (){
    // Basic Example 
    int a = 4;
    int * ptr = &a;
    cout<<"The value of a is "<< * (ptr) <<endl;

    //🚀 New operator(keyword)
    float *p = new float(40.38);

    cout<<"The value at address p is "<<*p<<endl;

    int *arr = new int[3]; // array in pointer
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;

    

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    //🚀 Delete operator(keyword)
    delete [] arr;  

    cout<<"\nAfter deleting operator(keyword) used"<<endl;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;


    return 0;
}