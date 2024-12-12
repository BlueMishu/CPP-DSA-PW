//Push at bottom
#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& st){
    stack<int> t;
    while(st.size()>0){
        
        t.push(st.top());
        st.pop();  
    }
    while(t.size()>0){
        cout<<t.top()<<" ";
        st.push(t.top());
        t.pop();
        
    }
}
void pushAtBottom(stack<int>& st,int x){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    while(temp.size()>0){
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
   display(st);
   cout<<endl;
   pushAtBottom(st,100);
   display(st);

}