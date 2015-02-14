#include<iostream>
#include<cstring>
using namespace std;
bool is_palindrome(int d)
{
    int a[6],i,n;
    n=d;
    for(i=0;i<6;i++)
    {
        a[5-i]=n%10;
        n=n/10;
    }
    for(i=0;i<3;i++)
    {
        if(a[i]!=a[5-i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b,n,count=0,x=0,y=0;
    for(a=100;a<1000;a++)
    {
        for(b=100;b<1000;b++)
        {
            n=a*b;
            if(is_palindrome(n)==true)
            {
                if(n>count)
                {
                    count=n;
                    x=a;
                    y=b;
                }
            }
        }
    }
    cout<<x<<" "<<y<<endl;
    cout<<count<<endl;
    return 0;
}
