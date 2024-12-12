// ordered set -> sorted set
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    for(auto ele : s){
        cout<<ele<<" ";
    }
}