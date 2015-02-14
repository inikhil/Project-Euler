#include<iostream>
using namespace std;
int a[1000],c[1000],e[1000],g[1000];
void printsum(){
    int i,sum=0;
    for(i=0;i<1000;i++){
        sum+=e[i];
        //cout<<e[i];
        //cout<<"\n";
    }
    cout<<sum;
}
void build(){
    int i;
    for(i=0;i<1000;i++){
        a[i]=c[i];
        c[i]=e[i];
    }
}
void add(int *a,int *b){
    int t=0,i,m,j;
    for(i=0;i<1000;i++){
        m=a[i]+b[i]+t;
        e[i]=m%10;
        t=m/10;
    }
}
void multiply(int k){
    int i,t,m,z=0,n;
    t=k%10;
    m=k/10;
    for(i=0;i<1000;i++){
        n=c[i]*t+z;
        e[i]=n%10;
        z=n/10;
    }
    z=0;
    g[0]=0;
    for(i=1;i<1000;i++){
        n=c[i-1]*m+z;
        g[i]=n%10;
        z=n/10;
    }
    add(e,g);
}
int main(){
    int i,j,k;
    a[0]=2;
    c[0]=3;
    for(i=1;i<1000;i++){
        a[i]=0;
        c[i]=0;
    }
    for(j=1;j<=33;j++){
        multiply(2*j);
        add(a,e);
        build();
        add(a,c);
        build();
        if(j==33){
            printsum();
            cout<<"\n";
        }
        add(a,c);
        build();
    }
}
