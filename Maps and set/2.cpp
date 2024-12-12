// map -> hasmaps
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p;
    p.first="raghav";
    p.second=14;
    pair<string,int> p2;
    p2.first="Divyansh";
    p2.second=19;
    pair<string,int> p3;
    p3.first="Mishu";
    p3.second=24;
    m.insert(p);
    m.insert(p2);
    m.insert(p3);
    m["Div"]=18;
    for(pair<string,int> p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl; 
    m.erase("Div");
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl; 
    cout<<m.size()<<endl;
    cout<<m["Divyansh"];
}