// k sorted array -> we have the sorted element for tha that place (k level ke aas paas ) if 2 is the smallest element than 2 can be at index {1,2,3,4}
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={6,5,3,2,8,10,9};
    int k=3;
    vector<int> v;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue< int,vector<int>,greater<int> > pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()==4){
            v.push_back(pq.top());
            pq.pop();
        } 
        
        
    }
    while(pq.size()>0){
        v.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}