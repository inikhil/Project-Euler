#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
bool is_palindrome(int m){
    int n=m,t=0,i,j;
    while(n!=0){t++;n=n/10;}
    int *a=new int[t];n=m;i=0;
    while(n!=0){a[i]=n%10;n=n/10;i++;}
    for(i=0,j=t-1;i<t/2;i++,j--){
        if(a[i]!=a[j]){return false;}
    }
    return true;
}

int main(){
    int i,j,m=0,k=0,t=0;
    long long sum=0;
    int *a=new int[7001];
    long long *b=new long long[1000];
    for(i=0;i<7001;i++){a[i]=i+1;}
    for(i=0;i<7001;i++){
        m=a[i]*a[i];
        for(j=i+1;j<7001;j++){
            m+=a[j]*a[j];
            if(m>=100000000){break;}
            if(is_palindrome(m)==true){b[k]=m;k++;}
        }
    }
    sort(b,b+k);m=0;
    for(i=0;i<k;i++){if(b[i]!=m){m=b[i];sum+=m;}}
    cout<<sum;
}
