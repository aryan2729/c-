#include<iostream>
using namespace std;

int main(){
    
    // Break statement
    for (int i =1; i<=10; i++){
        
        if(i==5){
            break; // end this loop 
        }
        cout<<i<<endl;
    }

    // Continue statement 
    for (int j = 0; j<11; j++){
        
        if(j==7){
            continue; // skip that number 
        }
        cout<<j<<endl; 
    }
    return 0;
}