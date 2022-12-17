#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> hash;
    map<char,int>::iterator itr;
    string s="hsdvweabfcjhasbdcjhregrehfjrjefsdmnvklnjuuuuujsdjsbuu";
    int i,maxcount=0;
    char maxvar;
    for(i=0;i<s[i]!='\0';i++){
        hash[s[i]]=0;
    }
    for(i=0;i<s.size();i++){
        if(hash.find(s[i]) != hash.end()){
            hash[s[i]]++;
        }
    }

    // for(itr=hash.begin();itr!=hash.end();itr++){
    //     cout<<(*itr).first<<" "<<(*itr).second<<endl;
    // }
    for(i=0;i<s.size();i++){
        if(hash[s[i]]>maxcount){
            maxcount=hash[s[i]];
            maxvar=s[i];
        }
    }
    cout<<maxvar<<" "<<maxcount;
    

    return 0;
}