#include<iostream>
#include<stdio.h>
#include<cmath>
#include<cstring>
using namespace std;
double prime(double a,double d)
{
    double b,c,t,i;
    b=a;
    cout<<b<<" ";
    c=d;
    cout<<c<<endl;
    for(i=3;i*i<=b;i=(i+2))
    {
        t=fmod(b,i);
        {
            if(t==0)
            {
                return c;
            }
        }
    }
    c=b;
    return c;
}
void factor(double n1)
{
    double n,i,count=0,k;
    n=n1;
    for(i=3;i*i<=n;i=(i+2))
    {
        if(fmod(n,i)==0)
        {
            count=prime(i,count);
        }
    }
    cout<<count;
}
int main()
{
    double n;
    cin>>n;
    factor(n);
    return 0;

}
