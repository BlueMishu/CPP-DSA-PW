// map -> sorted key of  map 
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> m;
    m[1]=20;
    m[3]=10;
    m[2]=50;
    for(auto ele : m){
        cout<<ele.first<<" "; 
    }
}