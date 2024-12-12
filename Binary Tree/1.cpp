// basic binary tree
#include<iostream>
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
int levels(Node* root){
    if(root==NULL) return 0;
    return (1+max(levels(root->left),levels(root->right)));
}
int max2(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(max2(root->left),max2(root->right)));
    
}
void display(Node * root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sum(Node * root){
    if(root==NULL) return 0;
    return (root->val+sum(root->left) + sum(root->right));
}
int size(Node * root){
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
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

    display(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<size(a)<<endl;
    cout<<max2(a)<<endl;
    cout<<levels(a)<<endl;
}