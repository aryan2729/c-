#include<iostream>
#include<vector>
using namespace std;
//🔥 Vector --> One benefit of using vectors, is that we can insert as many
// elements we want in a vector, without having to put some size parameter as
// in an array. In an array of 10 elements, for adding the 11th one, we’ll
// have to make an array again.


void display(vector <int> &v){   // v is reference   
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i) ; it tell which no. store at i 
    }
    cout<<endl;
    
}

int main(){
    // Ways to create vector 
    vector<int> vec1; //🚀 0 length vector 
    vector<char> vec2(4); // 4-element character vector 

    int element, size;
    cout<<"Enter the size of vector "<<endl;
    cin>>size;

    for(int i = 0; i < size ; i++){
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);   // add element 🚀
    }

    // vec1.pop_back(); // it will remove one 
    display(vec1);
    
    vector<int> :: iterator iter = vec1.begin();  // 🚀 defining iterator | .begin tells add it on first place ..
    vec1.insert(iter , 540);

    display(vec1);

    cout<<endl<<"iterator tell how much copy of that no. adds "<<endl;
    vector<int> :: iterator iter2 = vec1.begin();  
    vec1.insert(iter2 +1 , 5 , 40);  //🚀 the second represent how much add and last tell which no. add and first tell in what poition add +1 means if .begin() then +1 position add 1 right 

    display(vec1);



    return 0;
}