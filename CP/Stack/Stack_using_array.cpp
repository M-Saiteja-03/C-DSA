#include<iostream>
using namespace std;
#define n 100 
class stack{
    int *arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int val){
        if(top==n-1){
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow";
            return;
        }
        top--;
    }
    void Top(){
        if(top==-1){
            cout<<"stack is empty";
            return;
        }
        cout<<arr[top]<<endl;
    }
    void isEmpty(){
        if(top==-1){
            cout<<"stack is empty";
            return;
        }
        else{
            cout<<arr[top];
        }
    }
    void display(){
        if(top==-1){
            cout<<"empty";
        }
        // cout<<arr[top]<<endl;
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<endl;
        }
    }

};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    // s.Top();
    s.display();
    s.pop();
    s.pop();
    s.pop();
    s.display();
    return 0;
}