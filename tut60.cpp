#include<iostream>
#include<fstream>   // for dealing with files 

using namespace std;

//🔥 Reading and Writing Files in C++(m.i.p)

/* The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> drived from fstreambase  | present in fstream class
3. ofstream --> drived from fstreambase  | present in fstream class 

In order to work with files in c++ , you will have to open it . Primarily , there 
are 2 ways to open a file:
1. Using the Constructor 
2. Using the member function open() of the class */


int main(){

        string st1 = "Harry Bhai ";
        string st2;

        //🚀 Opening Files using Constructors and Writing it. 
        ofstream out("tut60Asample.txt");  //🪐 Write Operation 
        out<<st1;


        //🚀 Opening Files using Constructors and Reading it.

        ifstream in("tut60Bsample.txt");   //🪐 Read Operation 
        // in>>st2;        // if u use this only show first word 
        getline(in , st2); // this will show all words in first line . 
        cout<<st2;


        //🚀 out and in can be anything other name also 
        //🚀 out is a object of ofstream class and in is object of ifstream class 
        //🚀 and out is like cout for remeber in mind and in like cin input .










    return 0;
}