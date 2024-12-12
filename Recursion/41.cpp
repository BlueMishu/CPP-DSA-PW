// printing all the binary string of length n without repeating 1
#include<iostream>
using namespace std;
void generate(string s,int n){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n);
    if(s=="" || s[s.length()-1]=='0') generate(s+'1',n);
}
int main(){
    int n=3;
    generate("",n);
}