 // OOP - Classes and Objects

    // C++ --> Initially called --> C with classes by stroustroup
    // Class --> extension of structures in C
    // Structure had limitations 
    //       - members are public 
    //       - No methods 
    // Classes --> can have methods and properties 
    // Classes --> can make a few members as private & few as public 
    // Structures in C++ are typedefed
    // You can declare objects along with the class declaration like this:
        /* class Employee{
            // class definition
        } harry , rohan , lovish ;   */
    // harry.salary = 8 makes no sense if salary is private 
    //--------------------------------------------------------------------------------------------------------------------

//~ M.I.P🔥
// { Nesting of members functions } --> If one member function is called inside the other member function of the same class it is called nesting of a member function. 

#include<iostream>  // to use cin , cout
#include<string>    // to use string class.

using namespace std; 

// binary - > 0,1
class binary {

            // BY DEFAULT: PRIVATE don't need to write private:
        string s;
        void chk_binary(void);
                    // private member variable to store the binary string 

    public : 
        void read(void);    // declaration only func
        //void chk_binary(void); shifting this  to private 
        void ones_compliment(void); 
        void display(void);

} ; 

void binary :: read(void){
    cout<<"Enter a binary number "<<endl;
    cin>>s;  // stores the input in the string s
}


void binary :: chk_binary(void){
    // now for loop will iterate from _ to _ checking each character whether it is equal to or not equal to 0 & 1.
    
    for (int  i = 0; i < s.length() ; i++)
    {  
         if ( s.at(i)!='0' && s.at(i)!='1' ){          // s.at(i)  = s[i]  like indexing
            cout<<"Incorrect binary format "<<endl;
            exit(0);                                   // exit the program 
         }
        
    }
    
}


void binary :: ones_compliment(void){

    chk_binary();  // we don't need object to run this --> this is nesting

    for ( int i = 0; i < s.length() ; i++){
        if (s.at(i) == '0'){
            
            s.at(i) = '1';
        }
        else{               // s[i]=='1' || s.at(i)=='1'
            s.at(i) = '0';
        }

    }
    cout<<endl;
}


void binary :: display(void){
    cout<<"Displaying your binary number "<<endl;

    for(int i = 0; i < s.length() ; i++){
        cout<<s.at(i);    // s.at(i) = s[i] index
    }
}



int main(){
    
   
    binary b ;
    b.read();
    // b.chk_binary(); u can't do cuz it's in private | we want it's automatically run without object so add this in any function of class 
    b.display();
    cout<<endl;
    b.ones_compliment();
    b.display();




    return 0;
}