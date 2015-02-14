#include<iostream>
#include<cmath>
using namespace std;
double sum(double a)
{
    return a*(a+1)/2;
}
double factor(double n)
{
    int i;
    int count=0;
    for(i=1;i<=sqrt(n);i++)
    {
        if(fmod(n,i)==0)
        {
            count++;
        }
    }
    if(count>=250)
    {
        return n;
    }
    else
    {
        return 0;
    }
}
int main()
{
    double b=0,n,t;
    double a;
    for(a=1;b<500;a=(a+2))
    {
        n=sum(a);
        b=factor(n);
    }
    printf("%0.0f",n);
}
