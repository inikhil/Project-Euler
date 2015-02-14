#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i=0,j=0,m,k=0,t=0,prod=1;
    int *a=new int[1000001];
    int *b=new int[7];
    for(n=1;i<1000000;n++){
        m=n;
        t=0;
        j=0;
        while(m!=0){
            j++;
            b[t]=m%10;
            //cout<<b[t]<<" ";
            m=m/10;
            t++;
        }
        for(k=j-1;k>=0;k--){

            a[i]=b[k];
            i++;
        }
    }
    for(i=0;i<7;i++){
        prod=prod*a[int(pow(10.0,i))-1];
        //cout<<prod<<" ";
    }
    cout<<prod;
}
