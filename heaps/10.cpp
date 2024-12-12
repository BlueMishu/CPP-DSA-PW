// to check if the binary tree is max heap or not
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
public: 
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
    }
};
int sizeTree(Node * root){
    if(root==NULL) return 0;
    return 1 + sizeTree(root->left) + sizeTree(root->right);
}
bool isCBT (Node * root){ // bfs traversal
    int size=sizeTree(root);
    int count=0;
    queue<Node*> q;
    q.push(root);
    
    while(count<size){
        Node* temp=q.front();
        q.pop();
        count++;
        if(temp!=NULL) q.push(temp->left);
        if(temp!=NULL) q.push(temp->right);
    }
    while(q.size()>0){
        Node* temp=q.front();
        if(temp!=NULL) return false;
        q.pop();
    }
    cout<<endl;
    return true;
}
bool isMax(Node* root){
    if(root==NULL) return true;
    if((root->left!=NULL && root->val < root->right->val) || (root->left!=NULL && root->val < root-> left->val)) return false;
    return isMax(root->left) && isMax(root->right);
}
    
int main(){
    Node* a=new Node(20);
    Node* b=new Node(15);
    Node* c=new Node(10);
    Node* d=new Node(8);
    Node* e=new Node(11);
    Node* f=NULL;
    Node* g=new Node(6);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
   
    if(isCBT(a) && isMax(a)) cout<<"Tree is a max heap";
    else cout<<"Tree is not a max heap";
}