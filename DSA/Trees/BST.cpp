#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

// node * insertBST(node* root,int val){
//     node * y=NULL;
//     if(root==NULL){
//         return new node(val);
//     }
//     while(root!=NULL){
//         y=root;
//         if(val<root->data){
//             root=root->left;
//         }
//         else if(val>root->data){
//             root=root->right;
//         }
//     }
//     node * n=new node(val);
//     if(val<y->data){
//         y->left=n;
//     }
//     if(val>y->data){
//         y->right=n;
//     }
//     return y;
// }
void searchBST(node*root,int key){
    int flag=0;
    int level=0;
    while(root!=NULL){
        if(key==root->data){
            flag=1;
            cout<<key<<" "<<"found at level"<<" "<<level;
            break;
        }
        else if(key<root->data){
            root=root->left;
            level++;
        }
        else{
            root=root->right;
            level++;
        }
    }
    if(flag==0){
        cout<<"not found";
    }
}
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
int getrightmin(node * root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}

node * DeleteBst(node*root,int key){
    if(root==NULL){
        return NULL;
    }
    else if(key<root->data){
        root->left=DeleteBst(root->left,key);
    }
    else if(key>root->data){
        root->right=DeleteBst(root->right,key);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        else if(root->right==NULL){
            node *temp=root->left;
            delete root;
            return temp;
        }
        else if(root->left==NULL){
            node*temp=root->right;
            delete root;
            return temp;
        }
        else{
            int rightmin =getrightmin(root->right);
            root->data=rightmin;
            root->right=DeleteBst(root->right,rightmin);
        }
    }
    return root;
}


void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
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

int main()
{
    node *root=NULL;
    root=insertBST(root,5);
    // cout<<root->data;
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,6);
    inorder(root);
//     4
//    / \
//   2   5
//  /  \  \
// 1    3  6
    // preorder(root);
    DeleteBst(root,2);
    cout<<"\n";
    inorder(root);
    return 0;
}