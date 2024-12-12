// c prefix evaluation
#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s="-/*+79483";
    stack<int> st;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>=48 && s[i]<=57){
            st.push(s[i]-48);
        }
        else {
            char ch=s[i];
            int val1=st.top();
            st.pop();
            int val2=st.top();
            st.pop();
            if(ch=='+') st.push(val1+val2) ;
            else if(ch=='-') st.push(val1-val2);
            else if(ch=='*') st.push(val1*val2);
            else st.push(val1/val2);
        }
    }
    cout<<st.top()<<endl;
    
}