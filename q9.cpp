#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<1000;i++)
    {
        for(j=1;j<1000;j++)
        {
            if(((1000-i-j)*(1000-i-j))==(i*i+j*j))
            {
                cout<<i<<" "<<j<<" ";
                cout<<i*j*(1000-i-j)<<endl;
            }
        }
    }
    return 0;
}
