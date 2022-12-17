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


int Sumofnodes(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    int count=0,sum=0;
    while (q.empty() == false)
    {
        node *front = q.front();
        q.pop();
        if (front != NULL)
        {
            sum+=front->data;
            count++;
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
    cout<<endl;
    cout<<"count:"<<count;
    return sum;
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
    int sum=Sumofnodes(root);
    cout<<"\n";
    cout<<"sum of nodes:"<<sum;
}