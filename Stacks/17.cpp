// linked list implementation of stack
#include<iostream>
using namespace std;
class Node{
public:
    Node* next;
    int val;
    Node(int val){
        this->next=NULL;
        this->val=val;
    }
};
class Stack{
public:
    Node* head;
    int size;
    Stack(){
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
        if(head==NULL){
            cout<<"Stack is empty";
            return;
        }
        head=head->next;
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return head->val;
    }
    void print(Node* head){
        if(head==NULL) return;
        print(head->next);
        cout<<head->val<<" ";
    }
    void display(){
        Node* temp=head;
        print(temp);
        cout<<endl;
    }

};
int main(){
    Stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.display();

}