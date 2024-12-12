// Getting started with stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // printing of stack in reverse order -> emptying the stack
    // while(st.size()>0){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
   // we will use extra stack for keeping all the values
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
   cout<<endl<<st.top();
   

}