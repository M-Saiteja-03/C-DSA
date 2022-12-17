#include<iostream>
#include<stack>
using namespace std;
void insertBottom(stack<int> &s,int ele){
    if(s.empty()){
        s.push(ele);
        return;
    }
    int topele=s.top();
    s.pop();
    insertBottom(s,ele);
    s.push(topele);
}
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int ele=s.top();
    s.pop();
    reverse(s);
    insertBottom(s,ele);
}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    cout<<"stack after reversing:"<<endl;
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }


    return 0;
}