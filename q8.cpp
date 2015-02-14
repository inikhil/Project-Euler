#include<iostream>
#include<cstring>
#include<cstdlib>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    int i=0,k,j,count=0,m;
    int a[1000];
    string stri[20];
    ifstream myfile;
    myfile.open("q8.txt");
    while(!myfile.eof())
    {
        myfile>>stri[i];
        i++;
    }
    for(i=0;i<20;i++)
    {
        cout<<stri[i]<<endl;
    }
    j=0;
    for(i=0;i<1000;i=(i+50))
    {
        k=0;
        for(k=0;k<50;k++)
        {
            a[k+i]=(stri[j][k]-48);
        }
        j++;
    }
    /*for(i=0;i<1000;i++)
    {
        cout<<a[i]<<" ";
    }*/
    for(i=0;i<997;i++)
    {
        m=a[i]*a[i+1]*a[i+2]*a[i+3]*a[i+4];
        if(m>count)
        {
            count=m;
        }
    }
    cout<<count;

    return 0;
}
