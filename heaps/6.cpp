// minimum cost to connect all ropes
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={6,5,3,2,8,10,9};
    int n=7;
    priority_queue< int,vector<int>,greater<int> > pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int count=0;
    while(pq.size()>1){
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        pq.push(a+b);
        count+=(a+b);
    }
    cout<<count;
}