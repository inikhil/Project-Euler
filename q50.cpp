#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int n){
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int i,cunt=0,m=1;
    int *a=new int[1000000];
    a[0]=2;
    for(i=3;i<1000;i++){
        if(is_prime(i)==true){
            a[m]=i;
            m++;
        }
    }
   /* for(i=0;i<m;i++){
        cout<<a[i]<<" ";
    }*/
    m=0;
    while(cunt<1000){
        cunt=cunt+a[m];
        m++;
    }
    //cout<<cunt<<" ";
   // cout<<m<<" ";
    if(cunt>=1000){
        cunt=cunt-a[m-1];
        m--;
    }
    cout<<cunt<<" ";
   // cout<<m;
    while(is_prime(cunt)!=true){
        cunt=cunt-a[m-1];
        //cout<<cunt<<" ";
        m--;
    }
    cout<<cunt;
}
