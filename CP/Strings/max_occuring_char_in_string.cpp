
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count[26];
    memset(count,0,sizeof(count));
    string s= "abbbbbbbcftaaftappppppppppppppppppmxszzzzzzzzzzzzzz";
    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        cout<<count[i]<<" ";
    }
    cout<<'\n';
    int max=count[0];
    char x;
    x='a';
    for(int i=0;i<26;i++){
        if(count[i]>max){
            max=count[i];
            x='a'+i;
        }
    }
    cout<<x<<" "<<max;

    return 0;
}