#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="jkabfksadfjkesfa";
    // cout<<'a'-'A'; the difference between ascii value of a lower case char and upper case char is 32.;
    //LOWER TO UPPER CSE
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
    cout<<s<<endl;
    //UPPER TO LOWER CSE
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }
    cout<<s<<endl;

    //inbuilt function to convert lower to upper and vice versa
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    cout<<char('a'+1);
}