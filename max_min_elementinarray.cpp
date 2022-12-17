#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   int maxn=INT_MIN;
   int minn=INT_MAX;
   for(i=0;i<n;i++){
       maxn=max(arr[i],maxn);
       minn=min(arr[i],minn);
   }
    cout<<maxn<<endl;
    cout<<minn<<endl;
    

    return 0;
}