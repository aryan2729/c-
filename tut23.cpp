#include<iostream>
using namespace std;
// Memory allocation & using Arrays in class 🔥

/* The memory is only allocated to the variables of the class when the object is created. The
memory is not allocated to the variables when the class is declared. At the same time, single
variables can have different values for different objects , so every object has an individual copy of
all the variables of the class. but the memory is allocated to the function only once when the class is declared. */


class Shop {

    private:  // we don't need to write this cuz default -> private 
        int itemId[100] ;
        int itemPrice[100] ;   // this is array 
        int counter ;
    public:
        void initCounter(void){counter = 0;}
        void setPrice(void);  // this func and below func , both diclaration  func only 
        void displayPrice(void);

};

void Shop :: setPrice(void){
    cout<<"Enter Id of your item no "<<counter+1<<endl;  
    cin>>itemId[counter]; // this will store your id in index 1 if u again start this setPrice then index 2 so memory allocation easy 
    cout<<"Enter Price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void){

    for (int i = 0; i < counter; i++  ){
        cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
        
        Shop dukaan;
        dukaan.initCounter();
        dukaan.setPrice();
        dukaan.setPrice();
        dukaan.setPrice();
        dukaan.displayPrice();
        

    return 0;
}




