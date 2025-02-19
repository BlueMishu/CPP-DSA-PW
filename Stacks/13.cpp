// reverse a stack
#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
   while(st.size()>0){
        
        temp.push(st.top());
        st.pop();
        
   }
   cout<<endl;
   // putting elements back from temp to st and print in correct order
   while(temp.size()>0){
    cout<<temp.top()<<endl;
    st.push(temp.top());
    temp.pop();
    
   }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> gt;
    stack<int> rt;
    print(st);
    cout<<endl;
    // pushing st to gt
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }

    // pushing gt to rt
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }

    // pushing rt to st
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }
    print(st);
}