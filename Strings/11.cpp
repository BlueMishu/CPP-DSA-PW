//palindrome
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0,j=s.length()-1;
    bool flag=false;
    while(i<j){
        if(s[i]==s[j]) {
            flag=true;
            
            i++;
            j--;
            continue;
            
        }
        else{
            flag=false;
            
            i++;
            j--;
            break;
        }
    }
    if(flag==true) cout<<"Yes";
    else cout<<"No";
}