#include<iostream>
using namespace std;
int main(){
    int arr[6]={100,45,67,768,1234,67};
    int i,j,min;
    for(i=0;i<6;i++){
        min=i;
        for(j=i+1;j<6;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for (i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}