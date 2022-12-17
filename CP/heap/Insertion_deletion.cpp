// TC- O(logn)

#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    int ind;
    heap(){
        arr[0]=-1;
        size=0;
        ind=size;
    }
    void Insert(int val){
        size+=1;
        ind=size;
        arr[ind]=val;
        while(ind>1){
            int parent=ind/2;
            if(arr[ind]>arr[parent]){
                swap(arr[ind],arr[parent]);
            }
            ind=parent;
        }

    }
    void Delete(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
        }
        arr[1]=arr[size];
        // cout<<"size is:"<<size<<endl;
        size-=1;
        int i=1;
        while(i<size){
            int li=2*i;
            int ri=2*i+1;
            if(arr[i]<arr[li] && li<size){
                swap(arr[i],arr[li]);
                i=li;
            }
            else if(arr[i]<arr[ri] && ri<size){
                swap(arr[i],arr[ri]);
                i=ri;
            }
            else{
                return;
            }

        }
    }

    
    void Print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
    }
};




int main(){
    heap h;
    h.Insert(50);
    h.Insert(55);
    h.Insert(53);
    h.Insert(52);
    h.Insert(54);
    h.Print();
    h.Delete();
    h.Print();
}