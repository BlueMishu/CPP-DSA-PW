// top view of a tree -> very good question 
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
void levelorder(Node * root){
    int n=levels(root);
    for(int i=0;i<n;i++){
        nth(root,1,i+1);
        cout<<endl;
    }
}

Node* construct(int arr[],int n){
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
        else r=NULL;
        
        temp->left=l;
        temp->right=r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}
void topview(Node* root){
    unordered_map<int,int> m; // <level,root->val>
    queue< pair<Node*,int> > q; // <node,level> 
    pair<Node*,int> r;
    r.first=root;
    r.second=0;
    q.push(r);
    while(q.size()>0){
        Node* temp=(q.front()).first;
        int level=(q.front()).second;
        q.pop();
        if(m.find(level)==m.end()){
            m[level]=temp->val;
        }
        if(temp->left!=NULL){
            pair<Node*,int> p;
            p.first=temp->left;
            p.second=level-1;
            q.push(p);
        }
        if(temp->right!=NULL){
            pair<Node*,int> p;
            p.first=temp->right;
            p.second=level+1;
            q.push(p);
        }
    }
    int minlevel=INT_MAX;
    int maxlevel=INT_MIN;
    for(auto x:m){
        int level=x.first; 
        minlevel=min(minlevel,level);
        maxlevel=max(maxlevel,level);

    }
    for(int i=minlevel;i<=maxlevel;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    levelorder(root);
    topview(root);
}