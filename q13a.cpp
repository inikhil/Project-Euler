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
    int i,j,a[100][50],b[51],k=50,t;
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
    for(i=0;i<51;i++)
    {
        b[i]=0;
    }
    k=51;
    for(i=49;i>=0;i--)
    {
        for(j=0;j<100;j++)
        {
            b[k]=a[j][i]+b[k];
        }
        b[k-1]=b[k]/10;
        b[k]=(b[k]%10);
        k=k-1;
    }
    for(i=0;i<51;i++)
    {
        cout<<b[i];
    }
}

