#include<iostream>
#include<cmath>
#include<fstream>
#include<cstring>
int line(int n)
{
    int i,m;
    for(i=3;i<n;i++)
    {
        m=i*(i+1)/2;
        if(m==n)
        {
            return i;
        }
    }
}
int number(int n)
{
    return (n-1)*(n-2)/2+1;
}
using namespace std;
int main()
{
    int n,m,k;
    ifstream myfile;
    myfile.open("q18.txt");
    int i=1,j=0;
    int a[200];
    a[0]=0;
    while(!myfile.eof())
    {
        myfile>>a[i];
        i++;
    }
    n=i-1;
    //cout<<n;
    n=line(n);
    //cout<<n<<" ";
    for(k=n;k>=1;k--){
        m=number(k);
        //cout<<m<<" ";
        for(i=m;i<m+k-1;i++)
        {
            if(a[i+k-1]>a[i+k])
            {
                a[i]=a[i]+a[i+k-1];
                //cout<<i<<"->"<<a[i]<<" ";
            }
            else
            {
                a[i]=a[i]+a[i+k];
                //cout<<i<<"->"<<a[i]<<" ";
            }
        }
    }
    cout<<a[1];
    return 0;
}
