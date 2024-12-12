#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length()-1;i++){
        if(i%2!=0) s[i]='#';
    }
    cout<<s;
}