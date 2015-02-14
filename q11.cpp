#include<iostream>
#include<cstdlib>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
    int i=0,j=0,count=0,t,m,n,p;
    int a[20][20];
    ifstream myfile;
    myfile.open("q11.txt");
    for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
            myfile>>a[i][j];
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    //for left to right
    for(i=0;i<20;i++)
    {
        for(j=0;j<17;j++)
        {
            t=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
            if(t>count)
            {
                count=t;
            }
        }
    }
    //For upper to lower diagonal
    for(i=0;i<17;i++)
    {
        for(j=0;j<17;j++)
        {
            t=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
            if(t>count)
            {
                count=t;
            }
        }
    }
    //For lower to upper diagonal
    for(i=19;i>2;i--)
    {
        for(j=0;j<17;j++)
        {
            t=a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3];
            if(t>count)
            {
                count=t;
            }
        }
    }
    //for up to down
    for(i=0;i<17;i++)
    {
        for(j=0;j<20;j++)
        {
            t=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
            if(t>count)
            {
                count=t;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
