#include<iostream>
using namespace std;
int n,m;
int sum(int n)
{
    int i,count=0;
    for(i=1;i<1000;i++)
    {
        if(i%n==0)
        {
            count=count+i;
        }

    }
    cout<<count<<endl;
    return count;
}
int subtract(int m,int n)
{
    int i,count=0;
    for(i=1;i<1000;i++)
    {
        if((i%m==0) && (i%n==0) )
        {
                count=count+i;
        }
    }
    return count;
}
int main()
{
    int a,b,c;
    a=sum(3);
    b=sum(5);
    c=subtract(3,5);
    cout<<a+b-c;
    return 0;
}
