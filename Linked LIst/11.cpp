// insert , delete , get
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

class dll
{
public:
    Node *head;
    Node *tail;
    int size;
    dll()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail; // extra
            tail = temp;
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
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size > 0)
        {
            temp->next = head;
            head->prev = temp; // extra
            head = temp;
        }
        else
        {
            tail = head = temp;

            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val)
    {
        if (idx < 0 && idx > size)
            cout << "Invalid";
        else if (idx == 0)
            insertAtHead(val);
        else if (idx == size)
            insertAtTail(val);
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
            t->prev = temp;    // extra
            t->next->prev = t; // extra
            size++;
        }
    }
    int getAtIdx(int idx)
    {
        if (idx < 0 && idx >= size)
        {
            cout << "Invalid";
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size)
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
    void Display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void deleteAtHead()
    {
        if (size == 0)
            cout << "List is Empty";
        head = head->next;
        if (head != NULL)
            head->prev = NULL; // extra
        if (head == NULL)
            tail = NULL; // extra
        size--;
    }
    void deleteAtTail()
    {
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx)
    {
        Node *temp = head;
        if (idx < 0 && idx > size)
            cout << "Invalid";
        else if (idx == 0)
            return deleteAtHead();
        else if (idx == size - 1)
            return deleteAtTail();
        else
        {
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp; // extra
            size--;
        }
    }
};
int main()
{
    dll list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.Display();
    list.insertAtIdx(2, 99);
    list.Display();
    list.deleteAtTail();
    list.Display();
    list.deleteAtHead();
    list.Display();
    list.deleteAtIdx(1);
    list.Display();
}