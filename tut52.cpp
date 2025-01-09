#include<iostream>
using namespace std;

//🔥 Array of object using pointer 

class ShopItem{
        int id ;
        float price; // pvt default
    public:
        void setData(int a , float b){
            id = a;
            price = b;
        }
        void getData(){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main(){
        int size = 3;
        // int *ptr = &size;
        // int *ptr = new int [3];

        ShopItem *ptr = new ShopItem[size]; //🚀 array -> 3 object created | pointer
        ShopItem *ptrTemp = ptr;

        int p ;
        float q;

        for (int i = 0; i < size; i++)      
        {
            cout<<"Enter the Id and Price of item no. "<<i+1<<endl;
            cin>>p>>q;
            // (*ptr).setData(p,q);  use below method 
            ptr->setData(p,q);
            ptr++;
        }
        for (int i = 0; i < size; i++)
        {
            cout<<"Item no. "<<i+1<<endl;
            ptrTemp->getData();
            ptrTemp++;
        }

    return 0;
}

// 1.We created an integer variable “size” and assigned the value “3” to it.
// 2.Array of objects of size “3” is created dynamically by using the “new”.
//   keyword and its address is assigned to the pointer “ptr”.
// 3.The address of pointer “ptr” is assigned to another pointer “ptrTemp”.
// 4.We created a “for” loop which will run till the size of array and will take
//   input for “id” and “price” from user at run time. In this “for” loop “setdata” 
//   function is called using pointer “ptr”; the function will set the values of “id”
//   and “price” which user will enter. The value of the pointer “ptr” is incremented
//   by 1 in every iteration of loop.
// 5.We created another “for” loop which will run till the size of array and will print
//  the number of the item. In this “for” loop “getdata” function is called using pointer “ptr”;
//  the function will print the values of “id” and “price”. The value of the pointer “ptrTemp” 
//  is incremented by 1 in every iteration of loop.
// 6.The main thing to note here is that in the first “for” loop we are incrementing the value
//   of the pointer “ptr” because it is pointing to the address of array of objects and when loop will
//   run every time the function “setdata” will be called by the different object. If we don’t increment
//   the value of the pointer “ptr” the each time function “setdata” will be called by the same object.
//   Likewise in the second loop we are incrementing the pointer “ptrTemp” so that the function “getdata” 
//   could be called by each object in the array.
// 7. We've created ptrTemp cuz when our first for loop run at the end it's ptr value at last object so we need
//    another pointer which is ptrTemp which start from ptr starting so we = that to ptr & why we need ptrTemp 
//    we need that one for print getData .


//      1 2 3
//      |   |
//      |   |
//      |   |    --> This is after first for loop that why we need ptrTemp
//      |  ptr    
//    ptrTemp