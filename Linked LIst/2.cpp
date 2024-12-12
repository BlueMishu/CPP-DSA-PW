// Node Pointer and recursive display
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
void revdisplayrec(Node* head){
    if(head==NULL) return;
    revdisplayrec(head->next);
    cout<<head->val<<" ";
}
void displayrec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
int size(Node* head){
    Node* temp = head;
    int n=0;
    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    return n;
}
void insertAtEnd(Node* head,int val){
    Node* temp=new Node(val);
    while(head->next!=NULL) head=head->next;
    head->next=temp;
    
}
int main()
{

    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;
    insertAtEnd(a,50);
    // cout<<a->next->next->next->val;

    Node* temp = a;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
        cout<<endl;
    }
    // cout<<size(a);

    //revdisplayrec(a);
}