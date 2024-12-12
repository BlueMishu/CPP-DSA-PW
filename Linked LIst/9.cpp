// insert at end , insert at beginning , insert at index , get at idx , delete at head ,
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
class linkedlist
{
public:
    Node *head;
    Node *tail;
    int size;
    linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Invalid";
            return;
        }
        if (idx == 0)
        {
            insertAtHead(val);
            return;
        }
        if (idx == size)
        {
            insertAtTail(val);
            return;
        }
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
            size++;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            size++;
        }
    }
    int getAtIdx(int idx)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Invalid";
            return -1;
        }
        if (idx == 0)
            return head->val;
        if (idx == size - 1)
            return tail->val;
        else
        {
            Node *temp = head;
            for (int i = 0; i < idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead()
    {
        if (size == 0)
        {
            cout << "Invalid";
            return;
        }
        if (size == 1)
        {
            head = tail = NULL;
            size--;
        }
        else
        {
            head = head->next;
            size--;
        }
    }
    void deleteAtIdx(int idx)
    {
        if (size == 0)
        {
            cout << "Invalid";
            return;
        }
        if (idx < 0 || idx > size)
        {
            cout << "Invalid";
            return;
        }
        if (idx == 0)
            return deleteAtHead();
        if (idx == size - 1)
            return deleteAtTail();
        else
        {
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "Invalid";
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    linkedlist ll;
    ll.insertAtTail(10);
    ll.insertAtTail(90);
    ll.insertAtTail(70);
    ll.insertAtTail(80);
    ll.display();
    ll.insertAtTail(20);
    ll.display();
    ll.insertAtHead(50);
    ll.display();
    ll.insertAtIdx(2, 60);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
    cout << ll.getAtIdx(1);
}