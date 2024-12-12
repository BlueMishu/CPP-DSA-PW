// bfs traversals -> print nth level , level order traversal
#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val =val;
        this->left=NULL;
        this->right=NULL;
    }
};
void preorder(Node * root){   // root->left->right
    if(root==NULL) return; // base call
    cout<<root->val<<" "; // root
    preorder(root->left); // left
    preorder(root->right); // right
}
int levels(Node * root){
    if(root==NULL) return 0;
    return 1+levels(root->left)+levels(root->right);
}
void nth(Node * root,int curr,int tar){
    if(root==NULL) return ;
    if(curr==tar){
        cout<<root->val<<" ";
        return;
    } 
    nth(root->left,curr+1,tar);
    nth(root->right,curr+1,tar);

}
void nthrev(Node * root,int curr,int tar){
    if(root==NULL) return ;
    if(curr==tar){
        cout<<root->val<<" ";
        return;
    } 
    nthrev(root->right,curr+1,tar);
    nthrev(root->left,curr+1,tar);
}
void levelorder(Node * root){
    int n=levels(root);
    for(int i=0;i<n;i++){
        nth(root,1,i+1);
        cout<<endl;
    }
}
queue<Node*> q;

void levelOrderQueue(Node * root){ // bfs traversal
    q.push(root);
    
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;


    // level order traversal

    nth(a,1,1);
    nth(a,1,2);
    nth(a,1,3);
    cout<<endl;

    // level order function
    levelOrderQueue(a);

}