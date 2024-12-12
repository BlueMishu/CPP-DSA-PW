#include<iostream>
using namespace std;
int main(){
    string s="abcdefghijklmnopqrstuvwxyz";
    cout<<s.length();
    s.push_back(' ');
    cout<<s.length()<<endl;
    reverse(s.begin(),s.end());
    cout<<s;
}