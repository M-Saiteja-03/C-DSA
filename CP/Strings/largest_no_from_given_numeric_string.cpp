#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s="53214";
//     for(int i=1;i<s.size();i++){
//         for(int j=i+1;j<s.size();j++){
//             if(s[i]-s[j]<0){
//                 swap(s[i],s[j]);
//             }
//             else{
//                 continue;
//             }
 
//     }
// }

// cout<<s<<endl;
    sort(s.begin(),s.end(), greater<int>());
    cout<<s<<endl;
}
