#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    int i,t=0,m,e=2;
    int a[1000],b[1000],c[1000];
    for(i=0;i<999;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    a[999]=1;
    b[999]=1;
    c[0]=0;
    while(c[0]==0)
    {
        for(i=999;i>=0;i--)
        {
            m=t;
            t=a[i]+b[i];
            c[i]=t%10+m/10;
        }
        for(i=999;i>=0;i--)
        {
            a[i]=b[i];
            b[i]=c[i];
        }
        e++;
    }
    cout<<e;
    return 0;
}
