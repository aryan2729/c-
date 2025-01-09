#include<iostream>
#include<string>
using namespace std;

// EXAMPLES OF tut21.cpp 

class College{
   
    private:
        int  mobile;
        string relationship_status;
    
    public :
        string name ;
        int roll_no , cgpa , semister ;  

        void setPrivateInfo(int mob , string relation );   // mob ->  mobile & relation ->relationship  | only Declaration function further provide more in below code 
        void getData(){
            cout<<"Your Name = "<<name<<endl;
            cout<<"Your Roll_no = "<<roll_no<<endl;
            cout<<"Your Semister = "<<semister<<endl;
            cout<<"Your Mobile number = "<<mobile<<endl;
            cout<<"Your Relationship status = "<<relationship_status<<endl;
        }

        
};    //  ; --> cuz this is (class or struct) not function 

void College :: setPrivateInfo(int  mob , string relation ){   // here full  function --< this is code which we not write in above class  | we still can write this code in above class but messy or long class 
    
    mobile = mob;
    relationship_status = relation;

}  // function no ;
    

int main (){
    
    College student1;
    student1.name = "ARYAN";
    student1.roll_no = 4;
    student1.semister = 1;
    // studen1.mobile = 123;    -- > u can't define like this cuz this is in private 

    student1.setPrivateInfo(1234567890,"Single");
    student1.getData();


    return 0;
}