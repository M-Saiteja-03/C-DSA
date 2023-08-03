#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

        node(int val){
            // cout<<"called"<<endl;
            data=val;
            next=NULL;
        }
    };
void insertAtHead(node* &head,int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
void insertAtMiddle(node *&head,int val,int pos){
    node * n=new node(val);
    node *ptr=head;
    for(int i=0;i<pos-1;i++){
        ptr=ptr->next;
    }
    n->next=ptr->next;
    ptr->next=n;

}
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
void display(node * head){
    node*ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;

}
void deleteBegin(node * &head){
    if(head==NULL){
        cout<<"list is empty"<<endl;
    }
    node *ptr=head;
    head=head->next;
    delete ptr;
}
void deleteMiddle_End(node*&head,int val){
    if(head==NULL){
        cout<<"list is empty"<<endl;
    }
    if(head->next==NULL){
        deleteBegin(head);
        return;
    }
    node * ptr=head;
    while(ptr->next->data!=val){
        ptr=ptr->next;
    }
    node * todel=ptr->next;
    ptr->next=todel->next;
    delete todel;
}

int search(node* &head,int key){
    node *ptr=head;
    while(ptr!=NULL){
        if(ptr->data==key){
            return 1;
        }
        ptr=ptr->next;
    }
    return 0;
}
void reverse(node * &head){
    node* prevptr=NULL;
    node* currptr=head;
    node*nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    head=prevptr;
}

node * reverseRecursive(node * &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node * newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

int main(){
    node * head=NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtHead(head,5);
    insertAtMiddle(head,10,2);
    // cout<<search(head,5);
    display(head);
    // deleteMiddle_End(head,10);
    // deleteMiddle_End(head,4);
    // deleteBegin(head);
    reverse(head);
    display(head);
    node * newhead=reverseRecursive(head);
    display(newhead);
}