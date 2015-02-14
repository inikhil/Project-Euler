#include<iostream>
using namespace std;
int digsum(int a,int b)
{
    int x[2],y[200],z[200],d[200],j,sum=0,t,m,i;
    for(i=0;i<200;i++){
        y[i]=0;
        z[i]=0;
        d[i]=0;
    }
    i=0;
    x[0]=a%10;
    x[1]=a/10;
    y[0]=x[0];
    y[1]=x[1];
    for(j=0;j<b-1;j++){
        t=0;
        for(i=0;i<200;i++){
            m=y[i]*x[0]+t;
            d[i]=m%10;
            t=m/10;
        }
        t=0;
        for(i=1;i<200;i++){
            m=y[i-1]*x[1]+t;
            z[i]=m%10;
            t=m/10;
        }
        t=0;
        for(i=0;i<200;i++){
            m=d[i]+z[i]+t;
            y[i]=m%10;
            t=m/10;
        }
    }
    for(j=0;j<200;j++){
        sum+=y[j];
    }
    return sum;
}
int main()
{
    int i,j,cunt=0,t;
    for(i=0;i<100;i++){
        for(j=0;j<100;j++){
            t=digsum(i,j);
            if(t>cunt){
                cunt=t;
            }
        }
    }
    cout<<cunt;
}
