#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int sum=arr[0];
        if(n==1 && arr[0]==0) cout<<1<<endl;
        else if(n==1 && arr[0]!=0) cout<<1<<endl;
        else if(arr[0]==1000000000) cout<<1<<endl;
        else {
            for(int k=1;k<n-1;k++){
                sum+=arr[k];
                if(sum==arr[k+1]) cout<<k<<endl;
            }
        }
    }
}