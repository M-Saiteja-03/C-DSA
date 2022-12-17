#include<iostream>
using namespace std;
int bin_search(int arr[],int n,int key){
    int low=0;
    int high=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    int i,n,key;
    cout<<"enter the length of the array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be searched:";
    cin>>key;
    int result=bin_search(arr,n,key);
    if(result==-1){
        cout<<"element not found";
    }
    else{
        cout<<arr[result]<<" "<<"found at"<<" "<<result;
    }
    return 0;

}