// sets
#include<iostream>
#include<unordered_set>
using  namespace std;
int main(){
    unordered_set<int> s; // set is not in any order they are just random value
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(2);
    //set only stores unique element

    cout<<s.size()<<endl;
    // for each loop -> for display

    for(int ele : s){
        cout<<ele<<" ";
    }

    // finding an element if it is present in the set
    int target=4;
     
    // s.find()-> it searches the target if the target is not found it return s.end()
    // that's why we search for != as if s.find==s.end(the last element) than the target is not found
    if(s.find(target)!=s.end()){
        cout<<"exists"<<endl;
    }
    else cout<<"does not exists"<<endl;
    cout<<endl;
    cout<<-4%(3);
}