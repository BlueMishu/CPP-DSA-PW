//most occuring word in a string
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s="mishu in vit college";
    stringstream ss(s);
    string temp;
    string a;
    int n=s.size();
    while(ss>>temp){
        cout<<temp;
        //a=temp[-1];
    }
    cout<<a[0];
}