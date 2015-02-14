#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int i,m,j,b[11],c,t,d[998];
    double a[998];
    vector<int> cnt;
    for(i=0;i<998;i++)
    {
        a[i]=-1;
        d[i]=0;
    }
    for(i=2;i<1000;i++)
    {
        a[i-2]=(double)1/i;
    }
    for(i=0;i<998;i++)
    {
        m=0;
        while(m!=1)
        {
            c=a[i]*10;
            cout<<c<<" ";
            a[i]=a[i]*10;
            a[i]=a[i]-c;
            cout<<a[i]<<" ";
            d[i]++;
            cnt.push_back(c);
            t=cnt.size()-1;
            for(j=t;j>0;j--)
            {
                if(cnt[t]==cnt[j-1])
                {
                    m=1;
                }
            }
        }
    }
    for(i=0;i<998;i++)
    {
        cout<<d[i]<<" ";
    }
    return 0;
}
