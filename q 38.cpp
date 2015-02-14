#include<iostream>
#include<cmath>
using namespace std;
bool sum(int n){
    int t=0;
    while(n!=0){
        t=t+n%10;
        n=n/10;
    }
    if(t==45){
        return true;
    }
    return false;
}
bool sq_sum(int n){
    int t=0,m;
    while(n!=0){
        m=n%10;
        t=t+m*m;
        n=n/10;
    }
    if(t==285){
        return true;
    }
    return false;
}
int main(){
    int t=918273645,i,a,b,c,n;
    for(i=100;i<333;i++){
        a=i;
        b=i*2;
        c=i*3;
        n=c+pow(10.0,3)*b+pow(10.0,6)*a;
        if(sum(n)==true){
            if(sq_sum(n)==true){
                if(n>t){
                    t=n;
                }
            }
        }
    }
    for(i=5000;i<10000;i++){
        a=i;
        b=i*2;
        n=b+pow(10.0,5)*a;
        if(sum(n)==true){
            if(sq_sum(n)==true){
                if(n>t){
                    t=n;
                }
            }
        }
    }
    cout<<t;
}
