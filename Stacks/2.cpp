//Reverse a stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> gt;
    stack<int> rt;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<endl;
    cout<<st.size()<<" "<<gt.size()<<" "<<rt.size()<<" "<<endl;
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    cout<<st.size()<<" "<<gt.size()<<" "<<rt.size()<<" "<<endl;
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }
    cout<<st.size()<<" "<<gt.size()<<" "<<rt.size()<<" "<<endl;
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    cout<<st.size()<<" "<<gt.size()<<" "<<rt.size()<<" "<<endl;
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<st.size()<<" "<<gt.size()<<" "<<rt.size()<<" "<<endl;
    cout<<endl;
}