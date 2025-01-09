#include<iostream>
#include<fstream>  // imp for dealing with files 
using namespace std;

//🔥 Read/Write in the Same Program & Closing Files


int main(){
    // connecting our file with hout stream
        ofstream hout("tut61sample.txt");

    // creating a name string and filling it with the string entered by the user .
        cout<<"Enter your name: ";
        string name;
        cin>> name;

    // writing a string to the file 
        hout<<"my name is "<<name;
        hout.close();   // closing the file -> imp

    // for read the same file 
        ifstream hin("tut61sample.txt");
        string st1;
        // hin>>st1;   // this will only read first word & below getline can read 1 line . if u want line 2 again run getline
        getline(hin,st1);
        cout<<"File data here: "<<st1;
        hin.close();   // very.imp




    return 0;
}