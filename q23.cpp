#include<iostream>
#include<vector>
using namespace std;
bool isabundant(int n)
{
    int i,count=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
           count=count+i;
        }
    }
    if(count>n)
    {
        return true;
    }
    return false;
}
int main()
{
    vector<int> abund;
    vector<int> sum;
    int i,j,t,m=0,count=0,a;
    for(i=2;i<28123;i++)
    {
        if(isabundant(i)==true)
        {
            abund.push_back(i);
        }
    }
    j=0;
    k=0;
    for(i=0;i<abund.size();i++)
    {
        for(j=i;j<abund.size();j++)
        {
            sum.push_back(abund[i]+abund[j]);
        }
    }
    for(i=0;i<abund.size();i++)
    {
        for(j=i;j<abund.size();j++)
        {

        }
    }
    t=sum.size();
    cout<<t<<endl;



    return 0;
}


