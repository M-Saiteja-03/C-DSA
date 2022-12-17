#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main()
{
    vector<int> nums1={1,2,2,1};
    vector<int> nums2={2,2};
    // unordered_set<int> m(nums2.begin(), nums2.end());
    unordered_map<int,int> m;
    vector<int> result;
    for(int i=0;i<nums1.size();i++){
        if(m.find(nums1[i])==m.end()){
            m[nums1[i]]=1;
        }
    }

    for(int i=0;i<nums2.size();i++){
        if(m.find(nums2[i])!=m.end() && m[nums2[i]]==1){
            m[nums2[i]]=2;
            // result.push_back(nums2[i]);
            // m.erase(nums2[i]);
        }
    }
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    for(auto i : m){
        if(i.second==1){
            result.push_back(i.first);
        }
    }
    for(auto i : result){
        cout<<i<<" ";
    }

    }

 