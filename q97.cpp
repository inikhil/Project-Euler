#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[10],i,j,t,m,n=28433;
    for(i=0;i<10;i++){
        a[i]=0;
    }
    i=0;
    while(n!=0){
        a[i]=n%10;
        n=n/10;
        i++;
    }
    for(i=0;i<7830457;i++){
        t=0;
        m=0;
        for(j=0;j<10;j++){
            m=a[j]*2;
            a[j]=m%10+t;
            t=m/10;
        }
    }
    t=1;
    for(j=0;j<10;j++){
        m=a[j]+t;
        a[j]=m%10;
        t=m/10;
    }
    for(i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
}
