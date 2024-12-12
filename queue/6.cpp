// reverse first k elements
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int> q){
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;

}
void reverseK(int k,queue<int>& q){
    stack<int> st;
    int n=q.size();
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=k;i<n;i++){
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    display(q);
    int k=4;
    reverseK(k,q);
    display(q);
}