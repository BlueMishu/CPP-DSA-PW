// put 0's to end
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,3,5,0,0,4,5,0,6};
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(arr[j]==0) swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<8;i++){
        cout<<arr[i];
    }
}