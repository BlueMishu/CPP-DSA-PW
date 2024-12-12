#include<iostream>
#include<vector>

using namespace std;
int main(){
    string s="asdfxyzx";
    string str="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='x') str.push_back(s[i]);
    }
    cout<<str<<" "<<endl;
    for(int i=0;i<str.size()-1;i++){
        for(int j=0;j<str.size()-1;j++){
            if(int(str[j])>int(str[j+1])) swap(str[j+1],str[j]);
    }   }
    cout<<str<<" "<<endl;
}