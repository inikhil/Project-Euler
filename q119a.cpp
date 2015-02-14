#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int sumdigit(long long n){
    int t=0;
    while(n!=0){
        t+=fmod(n,10.0);n=n/10;
    }
    return t;
}
int main(){
    int i,j,k=0;
    long long t,m;long long a[100];
    for(i=2;i<100;i++){
        m=i;t=i;
        for(j=2;j<=9;j++){
            m=(long long)m*t;
            if(i==sumdigit(m)){a[k]=m;k++;}
        }
    }
    sort(a,a+k);cout<<a[29];
}
