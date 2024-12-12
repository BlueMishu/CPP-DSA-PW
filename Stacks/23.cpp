// infix stack
#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch== '-') return 1;
    else return 2; // *,/
}
int solve(int a,int b,char ch){
    if(ch=='+') return a+b;
    else if(ch=='-') return a-b;
    else if(ch=='*') return a*b;
    else return a/b;
}
int main(){
    string s="2+6*4/8-3";
    // we need two stack one for values and another for operator
    stack<int> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        // check if the character is digit or not
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }
        else { // + , - , * , / 
            if(op.size()==0 || priority(s[i])>priority(op.top())) op.push(s[i]);
            else { // priority(s[i])<=priority(st.top())
                while(op.size()>0 && (priority(s[i])<=priority(op.top())) ){
                    // val1 op val2
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(val1,val2,ch);
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
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();
}