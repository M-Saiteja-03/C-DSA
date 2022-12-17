#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class queue{
    public:
    node*front;
    node*rear;
    queue(){
        front=NULL;
        rear=NULL;
    }
    void enqueue(int val){
        node * n=new node(val);
        if(front==NULL){
            front=n;
            rear=n;
            return;
        }
        rear->next=n;
        rear=n;    
    }

    void dequeue(){
        if(front==NULL){
            cout<<"queue is empty"<<endl;
            return;
        }
        front=front->next;
    }

    int peek(){
        if(front==NULL){
            cout<<"No element present"<<endl;
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }


};
int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek();
    return 0;
}