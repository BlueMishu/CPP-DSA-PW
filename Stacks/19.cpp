//remove duplicates of an string
#include<iostream>
#include<stack>
using namespace std;
string remove(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(st.size()==0) st.push(s[i]);
        else if(s[i]!=st.top()) st.push(s[i]);


    }
    s="";
    while(st.size()>0){
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
    
}
int main(){
    string s="aaabbcffdee";
    cout<<s<<endl;
    s=remove(s);
    cout<<s<<endl;
}