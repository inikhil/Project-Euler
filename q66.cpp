#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int i,k,d=0,i1;
    long long p0,p1,p2,q0,q1,q2,a0,a1,a2,m,tt,ttt;
    double r0,r1,r2,t,xx;
  //  for(i=2;i<1000;i++){
  i=97;
        r0=(double) sqrt(i); a0=(long long)r0;m=0;
        if(r0!=a0){
            r1=(double)1/(r0-a0);a1=(long long)r1;
            p0=a0;q0=1;p1=(long long)a0*a1+1;q1=a1;k=0;
            if(p1*p1-1==i*q1*q1){cout<<p1<<" ";}
            else{
                while(k!=1){
                    r2=(double)1/(r1-a1);a2=(long long)r2;
                    p2=(long long)a2*p1;q2=(long long)a2*q1;
                    p2+=(long long)p0;q2+=(long long)q0;
                    t=(double) p2/q2; xx=(double)1/q2;
                    t=(double)t*t;xx=(double)xx*xx;
                    t=(double) t-xx;
                    if((int)t==i){cout<<p2<<" ";k=1;break;}//if(p2>d){d=p2;i1=i;break;}
                    p0=p1;p1=p2;q0=q1;q1=q2;r1=r2;a1=a2;cout<<p0<<" ";if(p0<0){break;}
                    m++;
                    if(m>1000000000){cout<<"#####"<<" ";break;}
                }
            }
        }
   // }
   // cout<<i1<<" ";
}
