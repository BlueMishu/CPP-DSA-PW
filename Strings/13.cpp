//Anagrams
#include<iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b) cout<<"Yes";
    else cout<<"No";
}