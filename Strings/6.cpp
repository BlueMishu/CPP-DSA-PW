//reverse part 
#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int a=s.length();
    reverse(s.begin(),s.begin()+a/2);
    cout<<s;
}