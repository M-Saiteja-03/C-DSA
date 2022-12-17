#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter the nos:";
    cin>>a>>b;
    int flag;
    for(j=a;j<=b;j++){
        for(i=2;i<j;i++){
            if(j%i==0){
                break;
            }
        }
        if(i==j){
                cout<<j<<endl;
            }
    }
}