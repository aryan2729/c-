#include<iostream>
using namespace std;

int main(){

    int age;  // first define age is int 
    cout<<"Tell me your age"<<endl;
    cin>>age; // input age 
    
    // Selection control strucutre: If else-if else ladder ~I.M.P🔥
    /*
    if((age<18)&&(age>0)) {
        cout<<"You can't come to my party"<<endl;
    }
    else if(age<1){
        cout<<"You are not yet born properly"<<endl;
    }
    else if (age==18){
        cout<<"You are a kid and you will get kid pass to enter in my party"<<endl;
    }
    else{
        cout<<"You can come to my party"<<endl;
    }
    */

    // Selection control strucutre: Switch case ~I.M.P🔥
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;

    default:
        cout<<"No special case";
        break;
    }



    return 0;
}
