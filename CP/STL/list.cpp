#include<iostream>
#include<list>
using namespace std;
void disp_list(list<int> &l){
    list<int> :: iterator itr=l.begin();
    cout<<"the elements of the list:";
    while(itr!=l.end()){
        cout<<*itr<<" ";
        itr++;
    }
}
int main()
{
    list<int> list1;
    int i,j,n,element;
    list<int> :: iterator itr=list1.begin();
    cout<<"enter the size of the list:"<<endl;
    cin>>n;
    cout<<"enter the elements:";
    for(i=0;i<n;i++){
        cin>>element;
        list1.push_back(element);
    }
    // disp_list(list1);
    // list1.pop_back();
    // list1.pop_front();
    // list1.sort();
    // list1.reverse();
    // list1.merge(list2);
    return 0;
}