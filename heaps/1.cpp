// max heap
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(-10);
    pq.push(40);
    cout<<pq.top()<<endl; // always gives the maximum element
    pq.pop(); // always remove the maximuum element
    cout<<pq.top()<<endl;
}