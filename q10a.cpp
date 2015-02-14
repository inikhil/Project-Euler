#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
bool prime(double n)
{
    int i;
    double a=1,b=1;
    for(i=1;b<sqrt(n);i++)
    {
        a=6*i-1;
        b=6*i+1;
        if((fmod(n,a)==0)||(fmod(n,b)==0))
        {
            if(b!=n&&a!=n)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int i,n=1,j=3;
    double count=5,a=0,b=0;
    for(n=1;b<2000000;n++)
    {
        a=6*n-1;
        b=6*n+1;
        if((prime(a)==true)&&(a<2000000))
        {
            count=count+a;
            //cout<<a<<" "<<count<<endl;
        }
        if((prime(b)==true)&&(b<2000000))
        {
           count=count+b;
           //cout<<b<<" "<<count<<endl;
        }
    }
    printf("%0.0f",count);
    return 0;
}
