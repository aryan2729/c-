#include<iostream>
using namespace std;

//🔥 Function Templates 

template <class T1 , class T2>
float funcAverage (T1 a , T2 b){ // 🔥
    float avg = (a + b)/2.0;
    return avg;

}

int main(){

    float a ;
    a = funcAverage(5,2);
    printf("The average of these number is %.3f " , a);   //%.3f means 3 limit after . and floating 



    return 0;
}