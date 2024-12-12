//INSERT AT HEAD
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
class LinkedList{
public:  
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size>0){
            temp->next=head;
            head=temp;
        }
        else {
            tail=head=temp;
            head=temp;
        }
        size++;
    }
    void Display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main(){
    LinkedList ll;
    ll.insertAtHead(20);
    ll.insertAtHead(10);
    ll.Display();
}