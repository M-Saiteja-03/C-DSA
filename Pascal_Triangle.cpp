#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f*=i;
    }
    return f;
}
int main()
{
    int n,i,j;
    cout<<"enter number:";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}