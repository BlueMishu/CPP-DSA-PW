#include<iostream>
using namespace std;
int main(){
    int total;
    cin>>total;
    string s;

    cin>>s;
    int count=0;
    for(int i=0;i<int(s.length());i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') count++;
        else continue;
    }
    cout<<total-count;
}