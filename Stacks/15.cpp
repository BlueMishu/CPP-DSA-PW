// display reverse  the stack recursively
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
void display(stack<int>& st){
    if(st.size()==0) return ;
    int x=st.top();
    
    st.pop();
    cout<<x<<" ";
    display(st);
    
    st.push(x);
    
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    display(st);
    

}

// if we want to push at the bottom using recursion then at the base we dont need to return but we will push the required value