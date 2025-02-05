#include <iostream>
using namespace std;

int main() {
	// your code goes here
    cout<<14/5;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        int choice=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]) choice++;
        }
        if(choice>0){
            cout<<"YES"<<endl;
            return 0;
        } 
        else if(choice==0){
            for(int i=0;i<n;i++){
                sum+=s1[i];
            }
             if(sum%2!=0){
                 cout<<"YES"<<endl;
                 
             } 
            
        }
       
        cout<<"NO"<<endl;
        
        
    }
    
}
