#include<iostream>
using namespace std;
bool prime(int n)
{
    int i;
    for(i=3;i<n;i+=2)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int j=4,i,n=1,a,b;
    for(n=2;j<10001;n++)
    {
        a=6*n-1;
        b=6*n+1;
        if(prime(a)==true)
        {
            j++;
            //cout<<i<<" "<<j<<endl;
        }
        if(prime(b)==true)
        {
            j++;
            //cout<<i<<" "<<j<<endl;
        }

    }
    cout<<a<<" "<<b;
    return 0;
}
