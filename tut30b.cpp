#include<iostream>
using namespace std;

class Point{

    private:
        int x , y;

    public:
        
        Point(int a , int b){ // Parameterized constructor full here 
            x = a;
            y = b;
        }

        void printDistance(){
            cout<<"The distance is ("<<x<<","<<y<<")"<<endl;
        }
}; // ; always do  in class or struct

int main(){

    Point p(4,6);
    p.printDistance();

    Point q(3,8);
    q.printDistance();

    return 0;
}



