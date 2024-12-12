// double linkedlist
#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev; // extra for dll
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL; // extra for dll
    }
};

void display(Node *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void displayrev(Node *tail)
{
    while (tail)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}

void displayrec(Node *head)
{
    if (head == NULL)
        return;
    cout << head->val << " ";
    displayrec(head->next);
}

void revdisplayrec(Node *head)
{
    if (head == NULL)
        return;
    revdisplayrec(head->next);
    cout << head->val << " ";
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

    display(a);
    displayrev(e);
    displayrec(a);
    cout<<endl;
    revdisplayrec(a);
    cout<<endl;

}