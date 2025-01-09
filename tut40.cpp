#include<iostream>
using namespace std;

//🔥 (Multilevel inheritance) is a type of inheritance in which 
// one derived class is inherited from another derived class.

class Student{
    protected:
        int roll_number;

    public: 
        void setRoll_Number(int ); // declration of function only 
        void getRoll_Number();
};

void Student :: setRoll_Number(int r){ // function full
    roll_number = r;
}
void Student :: getRoll_Number(){
    cout<<"The Roll Number is "<<roll_number<<endl;
}

class Exam : public Student {  //  publically inherit 
    protected:
        float physics ;
        float maths;

    public:
        void set_marks(float , float); // declaration only 
        void get_marks();
};

void Exam :: set_marks(float m1 , float m2){
    physics = m1;
    maths = m2;
}
void Exam :: get_marks(){
    cout<<"The Marks obtained in Physics are "<<physics<<endl;
    cout<<"The Marks obtained in maths are "<<maths<<endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display_Result(){
            getRoll_Number(); // 🔥 we can call this here nd one line down cuz multilevel inheritance 
            get_marks();
            cout<<"Your percentage is "<<(maths + physics)/2<<"%"<<endl;

        }
};

int main(){

    Result harry;
    harry.setRoll_Number(24);
    harry.set_marks(70,89);
    harry.display_Result();

    /*
    Notes🔥:
        If we are inheriting B from A  and C from B ( A-->B-->C )
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path 
    */
    
    return 0;
}


/* 🔥 M.I.P 🔥
For a protected member:
                            Public derivation  Private derivation  Protected derivation 
    1. Private members        Not Inherited      Not Inherited        Not Inherited                                           
    2. Protected members      Protected           Private             Protected                                          
    3. Public members          Public             Private             Protected                                                  

*/