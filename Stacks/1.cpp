//Basics
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
    cout<<st.size()<<endl;
   
    cout<<st.size()<<endl;
    //Printing stack bad method= we lost the stack
    // while(st.size()>0){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    //Printing with the help of temp= regaining the stack
    
    stack<int> t;
    while(st.size()>0){
        cout<<st.top()<<endl;
        t.push(st.top());
        st.pop();  
    }
    cout<<t.size()<<endl;
    while(t.size()>0){
        cout<<t.top()<<" ";
        st.push(t.top());
        t.pop();
        
    }
    cout<<st.top();
}