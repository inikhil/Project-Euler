#include<iostream>
#include<cmath>
using namespace std;
bool is_fifth(int n)
{
    int i,t=n,m,sum=0;
    for(i=0;i<7;i++)
    {
        m=t%10;
        t=t/10;
        sum+=pow(m,5.0);
    }
    if(sum==n)
        return true;
    return false;
}
int main ()
{
    int i,sum=0;
    for(i=10;i<400000;i++)
        if(is_fifth(i)==true)
            sum=sum+i;
    cout<<sum;
    return 0;
}
