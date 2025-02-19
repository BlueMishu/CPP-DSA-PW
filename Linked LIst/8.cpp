// Declaring a linked list
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void display(Node *head)
{
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void recdisplay(Node* head){
    if(head==NULL){
        cout<<endl;
        return ;
    } 
    cout<<head->val<<" ";
    recdisplay(head->next);
}
int size(Node *head){
    int n=0;
    Node* temp=head;

    while(temp!=NULL){
        
        temp=temp->next;
        n++;
    }
    return n; 
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    display(a);
    
    cout<<size(a)<<endl;

    recdisplay(a);
    
}