#include<iostream>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int countnodes(node*root){
    if(root==NULL){
        return 0;
    }
    int ln=countnodes(root->left);
    int rn=countnodes(root->right);
    return ln+rn+1;
    // return countnodes(root->left)+countnodes(root->right)+1;
}
int sumofNodes(node * root){
    if(root==NULL){
        return 0;
    }
    return sumofNodes(root->left)+sumofNodes(root->right)+root->data;
}
int main(){
    node * root=new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    // cout<<"preorder:";
    // preorder(root);
    int count=countnodes(root);
    cout<<count<<endl;
    int sum=sumofNodes(root);
    cout<<sum;

}