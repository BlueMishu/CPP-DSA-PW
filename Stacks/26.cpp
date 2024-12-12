// 2 infix to postfix
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch== '-') return 1;
    else return 2; // *,/
}
string solve(string val1,string val2,char ch){
    string sh="";
    
    sh+=val1;
    sh+=val2;
    sh.push_back(ch);
    return sh;
}
int main(){
    string s="(2+6)*4/8-3";
    // we need two stack one for values and another for operator
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        // check if the character is digit or not
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else { // + , - , * , / ,(,) 
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if(priority(s[i])>priority(op.top())) op.push(s[i]);
            
            else { // priority(s[i])<=priority(st.top())
                while(op.size()>0 && (priority(s[i])<=priority(op.top())) ){
                    // val1 op val2
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    //cout<<val.top();
    // the operator still can have values
    // so make it empty empty and do work again and again
    while(op.size()>0){
        // val1 op val2
        char ch=op.top();
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans=solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();
}