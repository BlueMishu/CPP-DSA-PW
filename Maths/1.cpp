// partition
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    // pre sum array
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }

    // finding partition element x
    bool flag=false;
    int idx=-1;
    for(int i=0;i<n;i++){
        // if sum(0->x)==sum(x+1->n-1)
        if(arr[i]==(arr[n-1]-arr[i])){
            flag=true;
            idx=i;
            break;
        } 
    }
    if(flag) cout<<"YES"<<" "<<idx;
    else cout<<"NO";

}