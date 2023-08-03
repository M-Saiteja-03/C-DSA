#include<bits/stdc++.h>
using namespace std;

vector<bool> sieve(1e5,true);

void calcPrimes(vector<bool> & sieve){
    for(int p=2; p*p<=1e5; p++){
        if(sieve[p]==true){
            for(int i=p*p;i<=1e5;i+=p){
                sieve[i]=false;
            }
        }
    }
}

bool checkPrime(int x){
    if(sieve[x]) return false;
    return true;
}

int main(){
    calcPrimes(sieve);
    int t;cin>>t;
    while(t--){
        int d;cin>>d;
        int n=1+d;
        while(checkPrime(n)) n++;
        int m=n+d;
        while(checkPrime(m)) m++;
        cout<<n*m<<endl;
    }
}