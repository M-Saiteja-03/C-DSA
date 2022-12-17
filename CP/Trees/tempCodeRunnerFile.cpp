node * insertBST(node * root,int key){
    if(root==NULL){
        return new node(key);
    }
    if(key<root->data){
        root->left=insertBST(root->left,key);
    }
    if(key>root->data){
        root->right=insertBST(root->right,key);
    }
    return root;
}
