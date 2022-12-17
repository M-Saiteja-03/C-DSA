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

void insertAtEnd(node * &head,int val){
    node * n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node*ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=n;
}
void display(node * &head){
    node*ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}

node* reversek(node * &head,int k){
    node*prevptr=NULL;
    node*currptr=head;
    node*nextptr;
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
}
int main(){
    node *head=NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtEnd(head,6);
    display(head);
    int k=2;
    node*newhead=reversek(head,k);
    display(newhead);

}