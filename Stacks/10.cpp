//Remove consecutive duplicates
#include<iostream>
#include<stack>
#include<string>
using namespace std;
string remDup(string& s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top()) st.push(s[i]);
        
    }
    string str;
    while(st.size()>0){
        str+=st.top();
        st.pop();
    }
    reverse(str.begin(),str.end());
    return str;
}
int main(){
    string s;
    s="aaabbccdeeeffg";
    cout<<remDup(s);
    
}