#include<iostream>
#include<vector>
using namespace std;
void disp_vector(vector<int> &v){
    cout<<"The elements are:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec1;
    int n,element;
    cout<<"enter the size of the vector:";
    cin>>n;
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>element;
        vec1.push_back(element);
    }
    disp_vector(vec1);
    vector<int> :: iterator iter=vec1.end();
    vec1.insert(iter,333);
    disp_vector(vec1);
    cout<<vec1.size()<<endl;
    return 0;
}