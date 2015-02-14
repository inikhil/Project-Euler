#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
bool is_prime(int n){
    int i;
    if(n%2==0){return false;}
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){return false;}
    }
    return true;
}
int main(){
    int i,j,k,t=0,m,jj,ii=0;
    int a[909];a[0]=2;j=1;
    int *b=new int[12000000];
    for(i=2;i<7100;i++){
        if(is_prime(i)==true){a[j]=i;j++;if(i==367){jj=j;}}
    }
    for(i=0;i<909;i++){
        for(j=0;j<=jj;j++){
            for(k=0;k<=23;k++){
                m=a[i]*a[i]+a[j]*a[j]*a[j]+a[k]*a[k]*a[k]*a[k];
                if(m<50000000){t++;b[ii]=m;ii++;}
            }
        }
    }
    sort(b,b+t);k=0;m=0;
    for(i=0;i<t;i++){
        if(b[i]!=k){k=b[i];m++;}
    }
    cout<<m<<" ";
}

