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
void display(node* &head){
    node*ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}
void intersect(node * &head1,node * &head2,int pos){
    // cout<<head2->data<<endl;
    node*ptr1=head1;
    for(int i=0;i<pos-1;i++){
        ptr1=ptr1->next;
    }
    // cout<<ptr1->data<<endl;
    node*ptr2=head2;
    while(ptr2->next!=NULL){
        ptr2=ptr2->next;
    }
    // cout<<ptr2->data;
    ptr2->next=ptr1;
    // cout<<head1->data<<endl;

}
int length(node * &head){
    int l=0;
    node * ptr=head;
    while(ptr!=NULL){
        l++;
        ptr=ptr->next;
    }
    return l;
}
int Intersection(node* &head1,node*&head2){
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    node*ptr1;
    node*ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d--){
        if(ptr1==NULL){
            return -1;
        }
        ptr1=ptr1->next;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            cout<<ptr1->data<<endl;
            return 1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }



    return -1;
}
int main(){
    node*head1=NULL;
    node*head2=NULL;
    insertAtEnd(head1,1);
    insertAtEnd(head1,2);
    insertAtEnd(head1,3);
    insertAtEnd(head1,4);
    insertAtEnd(head1,5);
    insertAtEnd(head1,6);
    // display(head1);
    // cout<<head1->data<<endl;
    insertAtEnd(head2,9);
    insertAtEnd(head2,10);
    // display(head2);
    // cout<<head2->data<<endl;
    intersect(head1,head2,5);
    display(head1);
    display(head2);
    int result=Intersection(head1,head2);
    if(result){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}