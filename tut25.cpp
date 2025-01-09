#include <iostream>
using namespace std;

//🔥 An Arrays of Objects ...

class Employee
{

private:
    int id; // default private or don't need write...
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee " << endl;
        cin>>id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }

} ; 

int main()
{       
        //Employee harry , lovish , rohan , shuruti ;
        // 🪐 if object_number  is large like 10 , 100 etc then we've to  make array in object

        Employee fb[4];  // 🚀this fb[4] -> 4 member store capacity array  .....
        // fb[0].setId();
        // fb[0].getId(); --> this is  easy written in loop like below 

        for (int i = 0; i<4 ; i++ ){  // we written 4 cuz in array index 3 not 4 ....

            fb[i].setId();
            fb[i].getId();  
        }
        
    
    return 0;
}
