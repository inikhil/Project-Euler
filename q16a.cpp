#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,m,count=0;
    int a[500],t[500];
    for(i=0;i<499;i++)
    {
        a[i]=0;
        t[i]=0;
    }
    a[499]=2;
    for(j=0;j<999;j++)
    {
        for(i=0;i<500;i++)
        {
            t[i]=0;
        }
        for(i=499;i>=0;i--)
        {
            m=2*a[i]+t[i];
            a[i]=(m)%10;
            t[i-1]=(m)/10+t[i-1];
        }
    }
    for(i=198;i<500;i++)
    {
        cout<<a[i]<<" ";
        count=count+a[i];
    }
    cout<<"\n";
    cout<<count;
    return 0;
}
