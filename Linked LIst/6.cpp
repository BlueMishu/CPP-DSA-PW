//remove nodes with same value as given
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
}