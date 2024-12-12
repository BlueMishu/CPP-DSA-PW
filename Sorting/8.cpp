// minimum possible sum of two numbers
#include<iostream>
using namespace std;
int main(){
    int arr[]={6,8,4,5,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int ind=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min) {
                min=arr[j];
                ind=j;
            }
        }
        swap(arr[i],arr[ind]);
    }
    int num1=0;
    int num2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            num1=num1*10+arr[i];

        }
        else num2=num2*10+arr[i];
    }
    cout<<num1+num2;
}