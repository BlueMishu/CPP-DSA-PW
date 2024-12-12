// reverse the queue using stack
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    stack<int> st;
    int n=q.size();
    for(int i=0;i<n;i++){
        st.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
}