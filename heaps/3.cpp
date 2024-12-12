// kth smallest element
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={10,200,-4,13,18,2,105,11};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()==4)  pq.pop();
    }
    cout<<pq.top()<<endl;
}