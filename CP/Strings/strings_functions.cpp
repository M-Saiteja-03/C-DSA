#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    //ways of declaring the string
    //#1
    string str(5,'S');
    string str1="abcdheyefghijk";
    string str2 ="abc";
    // getline(cin,str2);

    // str1.append(str2);

    // str1.clear();

    // cout<<str1.empty()<<endl;;
    
    // cout<<str1.compare(str2)<<endl;

    // str1.erase(2,3);
    // cout<<str1;

    // cout<<str1.find('k');
    
    // str1.insert(4,"hey");
    // cout<<str1;

    // str1.length() str1.size() -->same output

    // cout<<str1.substr(4,3);

    // string s="333";
    // int num=stoi(s);
    // cout<<num+7;
    
    // int x=333;
    // cout<<to_string(x)+"2";

    string s="uaiwfdhasdzfgvlho";
    sort(s.begin(),s.end());
    cout<<s;
    
    return 0;
}