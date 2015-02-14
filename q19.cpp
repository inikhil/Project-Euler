#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
     string m;
     int t=2,count=0,i,j;
     static const string day[7]= {"sun","mon","tue","wed","thu","fri","sat"};
     static const int lyear[12]={3,1,3,2,3,2,3,3,2,3,2,3};
     static const int nlyear[12]={3,0,3,2,3,2,3,3,2,3,2,3};
     //cout<<day[0];
     for(i=1901;i<2001;i++)
     {
         if(i%4==0)
         {
            for(j=0;j<12;j++)
            {
                 m=day[t];
                 if(m==day[0])
                 {
                     count=count+1;
                 }
                 t=t+lyear[j];
                 t=t%7;
            }
         }
         if(i%4!=0)
         {
            for(j=0;j<12;j++)
            {
                 m=day[t];
                 if(m==day[0])
                 {
                     count=count+1;
                 }
                 t=t+nlyear[j];
                 t=t%7;
            }
         }
     }
     cout<<count;
}
