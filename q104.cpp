#include<iostream>
#include<cstdio>
using namespace std;
bool is_pandigital(int *x){
    int i;
    for(i=1;i<10;i++){
        if(x[i]!=1){return false;}
    }
    return true;
}
int main(){
    int i,d=0,n=70000,j,m=0,t;
    int *a=new int[n];int *b=new int[n];
    int *c=new int[n];
    int *x=new int[10];int *y=new int[10];
    for(i=0;i<n;i++){a[i]=0;b[i]=0;}
    a[n-1]=1;b[n-1]=1;
    for(j=3;j<=500000;j++){
        m=0;
        for(i=n-1;i>=0;i--){
            t=a[i]+b[i]+d;
            c[i]=t%10;d=t/10;
        }
        for(i=0;i<n;i++){if(c[i]==0){m++;}else{break;}}
        for(i=0;i<n;i++){a[i]=b[i];b[i]=c[i];}
        d=0;
        for(i=0;i<10;i++){x[i]=0;y[i]=0;}
        for(i=m;i<min(n,m+9);i++){x[c[i]]++;}
        for(i=n-1;i>=n-9;i--){y[c[i]]++;}
        if(is_pandigital(x)==true && is_pandigital(y)==true){cout<<j<<" ";break;}//cout<<10000-m<<" ";}
        //if(is_pandigital(x)==true){cout<<100000-m<<" ";}
    }
}
