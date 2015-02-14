#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int t=0,m=0,i=0,n;
    //static const int a[10]={0,1,2,3,4,5,6,7,8,9};
    int count[10],b[10];
    for(i=0;i<10;i++)
    {
        count[i]=-1;
        b[i]=0;
    }
    i=0;
    for(n=9;n>0;n--)
    {
        while(m<1000000)
        {
            m=t+fact(n);
            count[i]++;
            if(m<1000000)
            {
                t=m;
            }
        }
        i++;
        m=t;
    }
    for(i=0;i<10;i++)
    {
        cout<<count[i]<<" ";
    }
    b[0]=count[0];
}
