#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<stdio.h>
#include<sstream>
using namespace std;
int main()
{
    int i=0,t,k=0,j,d,e;
    int f;
    string m,n;
    ifstream myfile;
    myfile.open("q22.txt");
    //myfile>>m;
    getline(myfile,m);
    //cout<<m;
    for(int i=0;i<m.size();i++)
    {
        switch(m[i]){
        case'"':case',':m[i]=' ';
        }
    }
    //cout<<m;
    stringstream ss(m);
    vector<string> words;
    string s;
    while(ss>>s)
    {
        words.push_back(s);
    }
    /*for(i=0;i<words.size();i++)
    {
        cout<<words[i]<<" ";
    }*/
    t=words.size();
    //cout<<t;
    vector<int> count;

    /*for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if(int(words[j][0])<int(words[i][0]))
            {
                n=words[j];
                words[j]=words[i];
                words[i]=n;
            }
        }
    }*/
    for(k=0;k<10;k++)
    {
        for(i=0;i<t;i++)
        {
            for(j=i+1;j<t;j++)
            {
                if((int(words[j][k])<int(words[i][k])))
                {
                    d=k;
                    //cout<<d<<" ";
                    e=0;
                    while((e!=1)&&(d>0))
                    {
                        if(words[i][d-1]==words[j][d-1])
                        {
                            d--;
                           // cout<<d<<" ";
                        }
                        else
                        {
                            e=1;
                        }
                    }
                    if(d==0)
                    {
                        n=words[j];
                        words[j]=words[i];
                        words[i]=n;
                    }
                }
            }
        }
    }
    for(i=0;i<t;i++)
    {
        cout<<words[i]<<" ";
    }
    k=0;
    f=0;
    for(i=0;i<t;i++)
    {
        for(j=0;j<words[i].size();j++)
        {
             k=k+(int(words[i][j])-64);
        }
        f=f+k*(i+1);
       // cout<<f<<" ";
        k=0;
    }
    //cout<<t<<" ";
    //cout<<words[t-1]<<" ";
    cout<<f;
}
