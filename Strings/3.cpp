#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int j=0;j<=n;j++){
        if(j%2==0) str[j]='a';
    }
    for(int k=0;k<n;k++){
        cout<<str[k];
    }
}