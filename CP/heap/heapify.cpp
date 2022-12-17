#include<iostream>
using namespace std;

void maxHeapify(int i,int arr[],int n){
    int largest=i;
    int lefti=2*i+1;
    int righti=2*i+2;
    if(lefti<n && arr[largest]<arr[lefti]){
        largest=lefti;
    }
    if(righti<n && arr[largest]<arr[righti]){
        largest=righti;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        maxHeapify(largest,arr,n);
    }
    


}

void heapSort(int arr[],int n){

    for(int i=n/2-1;i>=0;i--){
        maxHeapify(i,arr,n);
    }


    while(n>0){
        swap(arr[0],arr[n-1]);

        n=n-1;

        maxHeapify(0,arr,n);
    }

}

int main(){
//    int arr[]={4,5,3,2,6,1};
   int arr[] = { 12, 11, 13, 5, 6, 7 };
   int n=sizeof(arr)/sizeof(arr[0]);
   heapSort(arr,n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

}

