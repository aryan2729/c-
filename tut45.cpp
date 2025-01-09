#include<iostream>
using namespace std;

/* 🔥 Virtual Base Class (M.I.P)-> Virtual base classes prevent multiple 
instances of a given class from appearing in an inheritance hierarchy
when using multiple inheritances.
To resolve ambiguity when a base class is inherited by multiple derived
classes, declare the base class as virtual using the virtual keyword
before the access specifier (public, private, or protected) in the 
derived class definition. 

                    STUDENT 
                       |
            |----------|----------|
          TEST                  SPORTS
            |                     |
            |----------|----------|
                       |
                     RESULT                             */

class Student {
    protected:
        int roll_no ;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{   // 🚀 use 
    protected:
        float maths , physics ;

    public:
        void set_marks(float m1 , float m2){
                maths = m1;
                physics = m2;
        }
        void print_marks(void){
            cout << "Your result is here:"<<endl;  
            cout << "Maths: " << maths<<endl;         
            cout << "Physics: "<< physics<<endl;   
        }
};

class Sports : virtual public Student{ //🚀  use  
    protected:
        float score;
    
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(){
            cout<<"Your PT score : " <<score<<endl;

        }
};

class Result : public Test , public Sports {
    private:
        float total ;
    
    public:
        void display(void){
            total = maths + physics + score ;
            print_number();
            print_marks();
            print_score();
            cout << "Your Total score is : "<<total<<endl;
        }
};


int  main (){

        Result harry;
        harry.set_number(35);
        harry.set_marks(70.19 , 89.10);
        harry.set_score(9);
        harry.display();

    return 0;
}