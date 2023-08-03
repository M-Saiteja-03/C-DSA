#include <iostream>
#include <queue>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
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
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void Levelorder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (q.empty() == false)
    {
        node *front = q.front();
        q.pop();
        if (front != NULL)
        {
            cout << front->data << " ";
            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            cout << "\n";
        }
    }
}
int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    // cout<<"preorder:";
    // preorder(root);
    // cout<<endl;
    // cout<<"inorder:";
    // inorder(root);
    // cout<<endl;
    // cout<<"postorder:";
    // postorder(root);
    Levelorder(root);
}