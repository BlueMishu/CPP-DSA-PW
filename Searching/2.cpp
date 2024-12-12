// first occurance of a no
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,2,3,3,3,3,4,4,4,5,5};
    int n=13;
    int x=3;
    int lo=0;
    int hi=n-1;
    
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag=true;
            if(arr[mid-1]==x) hi=mid-1;
            else{
                cout<<mid;
                break;
            } 
            
        }
        else if(arr[mid]>x) hi=mid-1;
        else lo=mid+1;
    }
    if(flag==false) cout<<-1;


}