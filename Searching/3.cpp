// find the first missing no.
#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,6 ,7,9};
    int n=7;
    
    int lo=0;
    int hi=n-1;
    
    bool flag=false;
    int ans;
    
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        // if(arr[mid]==x){
        //     flag=true;
        //     if(arr[mid-1]==x) hi=mid-1;
        //     else{
        //         cout<<mid;
        //         break;
        //     } 
            
        // }
        // else if(arr[mid]>x) hi=mid-1;
        // else lo=mid+1;
        if(arr[mid]==mid) lo=mid+1;
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans;


}