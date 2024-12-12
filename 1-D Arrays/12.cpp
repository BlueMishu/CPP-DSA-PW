//array and vectors
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(789);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(45);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}