#include<iostream>
using namespace std;
int updateBit(int n,int pos,int val){
    n=(n & ~(1<<pos)); 
    return (n | (val<<pos));
}
int main()
{
    cout<<updateBit(7,3,1);
    return 0;
}