// inorder predecessor and successor -> this concept is used in deleting the node in bst


// inorder predecessor
if(root->left==NULL) return NULL;
Node* temp=root->left;
while(temp->right!=NULL){
    temp=temp->right;
}
return temp;


// inorder sucessor -> next greater element -> ek br right jayenge kyuki greater nikalne hai or uske bd greater ki leaset value dekhenge jo ki left most hogi
if(root->right==NULL) return NULL;
Node* temp=root->right;
while(temp->left!=NULL){
    temp=temp->left;
}
return temp->left;