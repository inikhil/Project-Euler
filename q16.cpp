#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    double n=1.0;
    double a[500];
    int i,count=0;
    for(i=0;i<56;i++)
    {
        n=n*2;
    }
    printf("%0.0f",n);
    cout<<"\n";
    for(i=0;i<500;i++)
    {
        a[i]=0;
    }
    cout<<"\n";
    for(i=499;i>=0;i--)
    {
        a[i]=(fmod(n,10.0));
        cout<<a[i]<<" ";
        n=floor(n/10);
        //printf("%0.0f",n);
        cout<<" ";
    }
    cout<<"\n";
    for(i=0;i<500;i++)
    {
        count=count+a[i];
        cout<<a[i]<<" ";
    }
    cout<<count;
    cout<<fmod(120000000000000000000000.00,10.0);
    return 0;
}
