#include<iostream>
using namespace std;
int main()
{
    int a[200],s[200];
    int n,i,t=0,j,count=0;
    cout<<"Enter your value of n : ";
    cin>>n;
    for(i=0;i<199;i++)
    {
        s[i]=0;
        a[i]=0;
    }
    s[199]=1;
    a[199]=1;
    for(i=1;i<=n;i++)
    {
        for(j=199;j>=0;j--)
        {
            t=s[j]*i+t/10;
            a[j]=t%10;
        }
        //cout<<i<<"->"<<a[95]<<a[96]<<a[97]<<a[98]<<a[99]<<" ";
        for(j=199;j>=0;j--)
        {
            s[j]=a[j];
        }
    }
    for(i=0;i<=199;i++)
    {
        count=count+a[i];
        cout<<a[i]<<" ";
    }
    cout<<count;
}
