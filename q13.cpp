#include<iostream>
#include<fstream>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
int main()
{
    ifstream myfile;
    myfile.open("q13.txt");
    int i,j,a[100][50],b[55],k=54,t;
    string s[100];
    for(i=0;i<100;i++)
    {
        myfile>>s[i];
    }
    //cout<<s[1][2]<<endl;
    for(i=0;i<100;i++)
    {
        for(j=0;j<50;j++)
        {
            a[i][j]=s[i][j]-48;
        }
    }
    for(i=0;i<55;i++)
    {
        b[i]=0;
    }
    for(i=0;i<2;i++)
    {
        for(j=49,k=54;j>=0;j--,k--)
        {
            b[k]=(a[i][j]+b[k])%10;
            t=k;
            while(t>0)
            {
                b[t-1]=((b[t]/10)+b[t-1])%10;
                t--;
            }
        }
    }
    for(i=0;i<55;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
