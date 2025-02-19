// priority queue 
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void heapify(int i,int arr[],int n){
    while(true){
            int l=2*i;
            int r=2*i+1;
            if(l>=n) break;
            if(r>=n){
                if(arr[i]>arr[l]){
                    swap(arr[l],arr[i]);
                    i=l;
                }
                break;
            }
            if(arr[l]<arr[r]){
                if(arr[i]>arr[l]){
                    swap(arr[l],arr[i]);
                    i=l;
                }
                else break;
            
            }
            else{
                if(arr[i]>arr[r]){
                    swap(arr[i],arr[r]);
                    i=r;
                }
                else break;
            }   
    }      
}
int main(){
    int arr[]={-1,10,2,14,11,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    for(int i=n/2;i>=1;i--){
        heapify(i,arr,n);
    }
    print(arr,n);
}