//most occuring word in a string
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string> v;

    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int count=1;
    int maxcount = 1;
    for(int i=0;i<=v.size()-1;i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxcount=max(count,maxcount);
    }
    cout<<maxcount<<endl;
    count=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxcount) cout<<v[i]<<" "<<maxcount<<endl;
    }
}