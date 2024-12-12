//insert at idx, get at idx, delete at head, delete at tail,delete at index
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
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
//     int size(Node* head){
//     Node* temp = head;
//     int n=0;
//     while (temp != NULL)
//     {
//         n++;
//         temp = temp->next;
//     }
//     return n;
// }
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
    void insertAtIdx(int idx,int val){
        if(idx<0 && idx>size) cout<<"Invalid";
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
        
    }
    int getAtIdx(int idx){
        if(idx<0 && idx>=size){
            cout<<"Invalid";
            return -1;
        } 
        else if(idx==0) return head->val;
        else if(idx==size) return tail->val;
        else{
            Node* temp=head;
            for(int i=0;i<idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }

    }
    void Display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void deleteAtHead(){
        if(size==0) cout<<"List is Empty";
        head=head->next;
        size--;
    }
    void deleteAtTail(){
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;

        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtIdx(int idx){
        Node* temp=head;
        if(idx<0 && idx>size) cout<<"Invalid";
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
};
int main(){
    LinkedList ll;
    ll.insertAtTail(10);
    
    ll.insertAtTail(20);
    
    ll.insertAtHead(50);
    ll.Display();
    ll.insertAtIdx(1,80);
    ll.Display();
    cout<<ll.getAtIdx(5)<<endl;
    ll.deleteAtHead();
    ll.Display();
    cout<<ll.size<<endl;
    ll.deleteAtTail();
    ll.Display();
    ll.insertAtHead(50);
    ll.insertAtHead(40);
    ll.insertAtHead(30);
    ll.Display();
    ll.deleteAtIdx(2);
    ll.Display();
}