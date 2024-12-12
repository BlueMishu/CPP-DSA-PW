//Fail Students
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of students : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the marks : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        if(arr[i]<=35){
            cout<<i<<" ";
        }
        
    }
}  