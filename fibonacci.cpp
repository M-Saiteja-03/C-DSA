#include<iostream>
using namespace std;
int main(){
    int n,i,nextterm;
    int t1=0;
    int t2=1;
    cout<<"Enter a no:";
    cin>>n;
    cout<<t1<<endl;
    cout<<t2<<endl;
    for(i=1;i<n-1;i++){
        nextterm=t1+t2;
        cout<<nextterm<<endl;
        t1=t2;
        t2=nextterm;
    }


}