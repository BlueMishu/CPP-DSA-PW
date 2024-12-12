// different permutation using swap
#include<iostream>
using namespace std;
void permutation(string& s,int idx){
    if(s.size()-1==idx){
        cout<<s<<endl;
        return;
    }
    for(int i=idx;i<s.size();i++){
        swap(s[idx],s[i]);
        permutation(s,idx+1);
        swap(s[idx],s[i]);
    }
}
int main(){
    string str="abc";
    permutation(str,0);
}