#include<iostream>
using namespace std;
struct TreeNode{
    int data;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
    int Diameter_opt(TreeNode * root,int &diameter){
    if(root==NULL){
        return 0;
    }
    int lh=Diameter_opt(root->left,diameter);
    int rh=Diameter_opt(root->right,diameter);
    diameter=max(diameter,lh+rh);
    return 1+max(lh,rh);
}


    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        Diameter_opt(root,diameter);
        return diameter;
        
    }



int main(){
    TreeNode * root=new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->right->left->left = new TreeNode(8);
    root->right->left->left->left = new TreeNode(9);
    int d=diameterOfBinaryTree(root);
    cout<<d;
}