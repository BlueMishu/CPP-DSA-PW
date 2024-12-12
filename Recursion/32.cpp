// removing an character from a word
#include<iostream>
using namespace std;
void remove(string ans, string og,int idx){
    if(idx==og.length()){
        cout<<ans;
        return;
    }
    char ch=og[idx];
    if(ch=='a') remove(ans,og,idx+1);
    else remove(ans+ch,og,idx+1);
}
int  main(){
    string str="Divyansh Singhal";
    remove("",str,0);
}