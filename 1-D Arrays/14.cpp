//use of at and sort
#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(56);
    v.push_back(45);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<endl;
    }
    cout<<endl;

    sort(v.begin(),v.end());// Ascending order

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<endl;
    }
    cout<<endl;

}