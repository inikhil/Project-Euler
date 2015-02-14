#include<iostream>
#include<cmath>
using namespace std;
int sumdigit(long long n){
    int t=0;
    while(n!=0){
        t+=fmod(n,10.0);n=n/10;
    }
    return t;
}
bool is_power(long long n,int t){
    long long i=t;
    if(t==1){return false;}
    while(i<=n){
        if(n==i){return true;}
        i=(long long)i*t;
    }
    return false;
}
int main(){
    long long a[30],i;
    int j=0,t;
    for(i=10;j<30;i=(i+1)){
        //i=512;
        t=sumdigit(i);//cout<<t<<" ";
        if(is_power(i,t)==true){a[j]=i;j++;cout<<a[j-1]<<" ";}
    }
}
