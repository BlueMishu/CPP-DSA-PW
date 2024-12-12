// max value in Array
#include<iostream>
using namespace std;
void max1(int arr[],int n, int idx,int max){
    if(idx==n){
        cout<<max<<endl;
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    max1(arr,n,idx+1,max);
}
int max2(int arr[],int n, int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],max2(arr,n,idx+1));
}
int main(){
    int arr[]={1,4,3,5,6,7,5,9};
    int n=sizeof(arr)/sizeof(arr[0 ]);
    max1(arr,n,0,INT_MIN);
    cout<<max2(arr,n,0);
}