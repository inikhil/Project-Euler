#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int prime(double n,vector<double> c)
{
    double i;
    int t;
    t=c.size();
    for(i=1;c[i]<=sqrt(n);i++)
    {
        if(fmod(n,c[i])==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    double n=1;
    int t,i;
    double count=5,a=0,b=0;
    vector<double> c;
    c.push_back(2);
    c.push_back(3);
    for(n=1;n<=333333;n++)
    {
        a=6*n-1;
        b=6*n+1;
        if(prime(a,c)==1)
        {
            c.push_back(a);
            count=count+a;
        }
        if(prime(b,c)==1)
        {
           c.push_back(b);
           count=count+b;
        }
    }
    printf("%0.0f",count);
    return 0;
}
