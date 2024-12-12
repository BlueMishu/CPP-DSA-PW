// array implementation of stack
#include<iostream>
#include<stack>
using namespace std;
class Stack{
public:
    int idx;
    int arr[5];
    Stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==4){
            cout<<"stack is full"<<endl;
        }
        idx++;
        arr[idx]=val;

    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is empty"<<endl;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    cout<<st.top();
}