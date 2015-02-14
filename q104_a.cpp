#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool IsPandigital(long f){
    int i;
    int *x=new int[9];
    for(i=0;i<9;i++){x[i]=0;}
    while(f!=0){
        x[f%10]++;
        f=f/10;
    }
    for(i=1;i<10;i++){
        if(x[i]!=1){return false;}
    }
    return true;
}
int main(){
    long fn2 = 1;
    long fn1 = 1;
    long fn;
    long tailcut = 1000000000;
    int n = 2;
    bool found = false;
    while (!found) {
        n++;
        fn = (fn1 + fn2) % tailcut;
        fn2 = fn1;
        fn1 = fn;
        if (IsPandigital(fn)) {
            double t = (n * 0.20898764024997873 - 0.3494850021680094);
            if (IsPandigital((long)pow(10, t - (long)t + 8)))
                found = true;
        }
    }
    cout<<n;
}
