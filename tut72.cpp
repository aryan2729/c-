#include<iostream>
#include<list>

//🔥 List 
using namespace std;


void Display(list<int> & lis){
    list<int> :: iterator it;   // making iterator of name it  

    for( it=lis.begin() ; it!=lis.end() ; it++ ){
    cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main(){

    list<int> list1; //🚀 List of 0 length 

    list1.push_back(5);  // push -> written elements and pop -> remove 
    list1.push_back(8);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(9);

    list<int> :: iterator itr ; // making iterator of name itr
    itr = list1.begin();  

    // cout<<*itr<<" "; // we can also make function for that e.g. above function 
    // itr++;
    // cout<<*itr<<" ";
    // itr++;
    // cout<<*itr<<" ";
    // itr++;
    // cout<<*itr<<" ";
    // itr++;
    // cout<<*itr<<" ";
    // itr++;
  
    Display(list1);  // batter then above lines
    
    // Removing element from list
    list1.pop_back(); //🚀 it remove last box element 
    // list1.pop_front(); //🚀 it remove front box element 
    list1.remove(9); // it remove all 9 number element from whole list
    
    //🚀 Sorting the list 
    list1.sort(); //🚀 it sort the whole list according to number 
    Display(list1);


    list<int> list2(3); // Empty list of size 3

    list<int> :: iterator ittrr ;
    ittrr = list2.begin();
    *ittrr = 45;
    ittrr++; // now it's go to next box 
    *ittrr = 30;
    ittrr++ ;
    *ittrr = 2;
    ittrr++ ;
    
    Display(list2);

    // 🚀 Merging two lists 
    list1.merge(list2);
    cout<<"After merging + sorting ";
    list1.sort();

    Display(list1);

    cout<<"After reversing the above list"<<endl;
    //🚀 Reversing the list 
    list1.reverse(); 
    Display(list1);



    


    return 0;
}