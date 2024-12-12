// 6 prefix to postfix
#include<iostream>
#include<stack>
#include<string>
using namespace std;
string solve(string val1,string val2,char ch){
    string sh="";
    
    sh+=val1;
    
    sh+=val2;
    sh.push_back(ch);
    
    return sh;
}
int main(){
    string s="-/*+79483";
    
    stack<string> val;
    
    for(int i=s.length()-1;i>=0;i--){
        
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else { // + , - , * , / ,(,) 
            
            char ch=s[i];
            string val1=val.top();
            val.pop();
            string val2=val.top();
            val.pop();
            string ans=solve(val1,val2,ch);
            val.push(ans);
        }
    }
    
    cout<<val.top();
}