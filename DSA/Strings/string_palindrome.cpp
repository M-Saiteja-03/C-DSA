#include<iostream>
using namespace std;
int main()
{
    string name;
    int check=1;
    cout<<"enter the name:";
    cin>>name;
    // cin>>int n;
    for(int i=0;i<name.size();i++){
        if(name[i]!=name[name.size()-1-i]){
            check=0;
            break;
        }
    }
    if(check){
        cout<<"It is palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}