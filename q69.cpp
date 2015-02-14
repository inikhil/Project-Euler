#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool is_prime(int n){
    int i;
    if(n%2==0){return false;}
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){return false;}
    }
    return true;
}
//n/phi(n) is maximum if and only if phi(n) is as minimum as possible so if we start multiplying the prime numbers we will make phi(n) easily minimum.
int main(){
    int i,j=0,t=2;
    for(i=3;i<10000;i++){
        if(is_prime(i)==true){t=t*i;if(t>=1000000){t=t/i;break;}}
    }
    cout<<t;
}
