#include<iostream>
using namespace std;

//🔥 Abstract Base Class & Pure Virtual Functions 🔥 (M.I.P)

/*🪐Pure Virtual Functions in C++.
Pure virtual function is a function that doesn’t perform any operation and the
function is declared by assigning the value 0 to it. Pure virtual functions are
declared in abstract classes.*/

/*🪐Abstract Base Class in C++.
Abstract base class is a class that has at least one pure virtual function in its body.
The classes which are inheriting the base class must need to override the virtual
function of the abstract class otherwise compiler will throw an error*/

class CWH{
    protected:
        string title;
        float ratings;

    public:
        CWH(string s, float r){   // constructor 
            title=s;
            ratings= r;
        }
        virtual void display()=0;  //🚀 (Pure Virtual Function) = do-nothing function 🚀
};

class CWHVideo : public CWH{
    
    float videoLength ; // pvt default

    public:
        CWHVideo( string s, float r, float vl) : CWH(s,r){  // constructor in derived class
        videoLength = vl;
        }

        void display(){
            cout<<"\nThis is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<ratings<<" out of 5 starts "<<endl;
            cout<<"Length of the video is: "<<videoLength<<" minutes\n"<<endl;
        }
};

class CWHText : public CWH{
    int words;
    public:
        CWHText(string s , float r , int  wc) : CWH(s , r){  // constructor to derived class 
            words = wc;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<ratings<<" out of 5 starts "<<endl;
            cout<<"No of words in the text tutorial is: "<<words<<endl;
        }

};

int main(){

    string title;
    float rating , vlan;
    int words;

    // For code with Harry Video
    title="C++ Playlist";
    rating = 4.55;
    vlan=5.89;
    CWHVideo djVideo(title,rating,vlan);
    // djVideo.display();

    // For code with Harry Text
    title = "C++ Text";
    words= 455;
    rating= 4.19;
    CWHText djText(title,rating , words);
    // djText.display();

    //🚀 but it's running only one at a time so we here used pointers

    CWH *tut[2];  
    tut[0]= & djVideo;
    tut[1]= & djText;

    tut[0]->display();
    tut[1]->display(); 
   
    return 0;
}



