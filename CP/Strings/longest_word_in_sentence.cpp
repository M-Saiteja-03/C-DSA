#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // cin.ignore();
    // char arr[n+1];

    // cin.getline(arr,n);
    // cin.ignore();
    string sent="I am a goodesttt person in the worllllddddd";
    // cout<<sent.size();
    int curlen=0,maxlen=0,st=0,maxst=0;
    int i=0;
    while(1){
        if(sent[i] != ' ' && sent[i]!='\0'){
            curlen++;
        }
        else{
            if(curlen>maxlen){
                maxlen=curlen;
                maxst=st;
            }
            curlen=0;
            st=i+1;
        }
        if(sent[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
    for(i=0;i<maxlen;i++){
        cout<<sent[i+maxst];
    }

    return 0;
}