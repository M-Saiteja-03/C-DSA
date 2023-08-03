#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    node * left;
    node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void LevelOrder(node * root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(q.empty()==false){
        node * front=q.front();
        q.pop();
        if(front!=NULL){
            cout<<front->data<<" ";
            if(front->left!=NULL){
                q.push(front->left);
            }
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            cout<<"\n";
        }
    }
} 

// bruteforce
int height(node * root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
int Diameter(node * root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    int currdiameter=lh+rh+1;

    int ld=Diameter(root->left);
    int rd=Diameter(root->right);
    return max(currdiameter,max(ld,rd)); 



    // if(currdiameter>max){
    //     max=currdiameter;
    // }
    // return max(ld,rd)+1;

}
//optimized o(n)
int Diameter_opt(node * root,int &maxi){
    if(root==NULL){
        return 0;
    }
    int lh=Diameter_opt(root->left,maxi);
    int rh=Diameter_opt(root->right,maxi);
    int currdiameter=lh+rh+1;

    if(currdiameter>maxi){
        maxi=currdiameter;
    }
    return max(maxi,currdiameter)+1;

}
int main(){
    node * root=new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->left->left = new node(8);
    root->right->left->left->left = new node(9);
    LevelOrder(root);
    // cout<<endl;
    // int h=height(root);
    // cout<<h<<endl;
    int max=0;
    int ld=Diameter_opt(root,max);
    cout<<ld;
}