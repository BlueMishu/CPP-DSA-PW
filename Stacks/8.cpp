//MAKING OWN STACK USING Linked List AND OOPS
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class stack{
public:
    Node* head;
    int size;
    stack(){
        head=NULL;
        size=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop(){
        if(head==NULL) {
            cout<<"Stack is empty"<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    int top(){
        if(head==NULL) {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return head->val;
    }
    void print(Node* temp){
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";
    }
    void display(){
        Node* temp=head;
        print(head);
        cout<<endl;
    }
};
int main(){
    stack st;
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(10);
    st.push(20);
    st.push(30);

    cout<<st.top()<<endl;
    
    
    cout<<st.top()<<endl;
    st.display();
}