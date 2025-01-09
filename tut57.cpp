#include<iostream>
using namespace std;

//🔥 Example of Virtual Function (m.i.p)

class CWH{
    protected:
        string title;
        float ratings;

    public:
        CWH(string s, float r){   // constructor 
            title=s;
            ratings= r;
        }
        virtual void display(){}  //🚀
};

class CWHVideo : public CWH{
    
    float videoLength ; // pvt default

    public:
        CWHVideo( string s, float r, float vl) : CWH(s,r){  // constructor in derived class
        videoLength = vl;
        }

        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<ratings<<" out of 5 starts "<<endl;
            cout<<"Length of the video is: "<<videoLength<<" minutes"<<endl;
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

    CWH *tut[2];  // 🚀 2 means 2 size capacity 
    tut[0]= & djVideo;
    tut[1]= & djText;

    tut[0]->display();
    tut[1]->display(); 

    // Rules for Virtual Functions
    // 1. They cannot be static.
    // 2. They are accessed by object pointers.
    // 3. Virtual functions can be a friend of another class .
    // 4. A virtual function in a base class might be not use. 
    // 5. If a virtual function is defined in a base class , there is no necessity to redefining it in the derived class. 

    return 0;
}