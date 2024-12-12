//string stream
#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string s="mishu in vit college";
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        cout<<temp[0];
    }
}