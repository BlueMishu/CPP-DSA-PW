#include<iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int l=0;l<t;l++){
        int n,m;
        cin>>n>>m;
        string s1;
        string s2;
        string temp1;
        string temp2;
        
        cin>>s1;
        cin>>s2;
        for(int i=0;i<m;i++){
            temp1[i]=s1[i];
        }
        for(int i=2;i<n;i++){
            temp2[i-2]=s1[i];
        }
        // for(int i=0;i<m;i++){
        //     cout<<temp2[i];
        //}
        
        
        int a1=0;
        int a2=0;
        
        for(int i=0;i<m;i++){
            if(temp1[i]==s2[i]) a1++;
        }
        for(int i=0;i<m;i++){
            if(temp2[i]==s2[i]) a2++;
        }
        
        cout<<a1<<" "<<a2<<endl;
    }
}
