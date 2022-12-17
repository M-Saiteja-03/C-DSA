#include<iostream>
#include<stack>
using namespace std;
void Reverse(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word=word+s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    string s="Hey, how are u doing?";
    Reverse(s);
    return 0;
}