#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int n){
    int i;
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(i=3;i<=sqrt(n);i=(i+2)){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool check(int n){
    int i,mm=1000;
    for(i=1;mm>0;i++){
        mm=n-2*i*i;
        if(mm<2){
            return false;
        }
        if(is_prime(mm)==true){
            return true;
        }
    }
}
int main(){
    int m=0,i;
    for(i=9;m!=1;i=(i+2)){
        if(is_prime(i)==false){
            if(check(i)==false){
                cout<<i;
                m=1;
                return 0;
            }
        }
    }
    return 0;
}
