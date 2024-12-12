// print index of a given element in an array is present or not
#include<iostream>
using namespace std;
bool present(int arr[],int n,int idx,int tar){
    if(idx==n){
        return false;
    }
    if(arr[idx]==tar){
        return true;
    }
    return present(arr,n,idx+1,tar);
    //return false;
}
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<present(arr,n,0,4);
}