// push a value at the bottom of the stack
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
    print(st);
    cout<<endl;
    stack<int> temp;
    while(st.size()>0){
        
        temp.push(st.top());
        st.pop();
    }
    st.push(70);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    print(st);

}