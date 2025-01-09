#include<iostream>
#include<fstream>
#include<string> // required for eof use 

using namespace std;

//🔥 Open function & eof(end of file) function in files 

int main(){

    ofstream out;         // object ofstream class
    out.open("tut62sample.txt");  //🚀
    out<<"This is me\n";
    out<<"and this is also me";
    out.close();


    ifstream in;
    string st;
    in.open("tut62sample.txt");
    // in>>st;   this will print only first word 
    // getline(in,st);  // use getline to print 1st whole line 
    while ( in.eof()==0){    //🚀 eof (end of file) 
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    





    return 0;
}