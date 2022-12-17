#include<iostream>
#include<cmath> //includes sqrt()
// #include<math.h> // includes pow(num,n)
using namespace std;
int main(){
    int n;
    cout<<"Enter the no:";
    cin>>n;
    int flag=1;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"Not Prime no"<<endl;
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<"Prime no"<<endl;
    }
}