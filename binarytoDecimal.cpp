#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,dnum,i,count,rem,sum;
    count=0;
    sum=0;
    cin>>num;
    dnum=num;
    while(dnum>0){
        dnum/=10;
        count+=1;
    }
    cout<<count<<endl;
    for(i=0;i<count;i++){
        rem=num%10;
        sum+=rem*pow(2,i);//for other conversions replace 2 by other bases respectively;
        num/=10;
    }
    cout<<"Decimal no:"<<sum<<endl;
    return 0;
}