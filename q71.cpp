#include<iostream>
#include<cstdio>
using namespace std;
int hcf(int n,int m){
    if(m%n==0){return n;}
    else{return hcf(m%n,n);}
}
int main(){
     double left=(double)2/7,right=(double)3/7,m;
     int left_num=2,left_den=7,i,j,k,t;
     for(i=4;i<=1000000;i++){
        j=left*i;//cout<<j<<" ";
        k=right*i+1;//cout<<k<<" ";
        for(t=j;t<=k;t++){
            if(hcf(t,i)==1){
                m=(double)t/i;//cout<<t<<" "<<i<<" ";
                if(m>left && m<right){
                    left=m;left_num=t;left_den=i;
                   // cout<<left_num<<" ";
                }
            }
        }
     }
     cout<<left_num<<" "<<left_den;

}
