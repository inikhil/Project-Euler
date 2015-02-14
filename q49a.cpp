#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int n){
    int i;
    for(i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int sum(int n){
    int t=0,m,d;
    for(m=n;m!=0;m=m/10){
        d=m%10;
        t=t+d*d*d;
    }
    return t;
}
int sum1(int n){
    int t=0,m,d;
    for(m=n;m!=0;m=m/10){
        d=m%10;
        t=t+d*d;
    }
    return t;
}
int diff(int i,int j){
    return j-i;
}
int main()
{
    int i,j,k,t,m,n;
    for(i=1001;i<10000;i++){
        if(is_prime(i)==true){
            t=sum(i);
            m=sum1(i);
            for(j=i+1;j<10000;j++){
                if(is_prime(j)==true){
                    if((sum(j)==t)&&(sum1(j)==m)){
                        for(k=j+1;k<10000;k++){
                            if(is_prime(k)==true){
                                if((sum(k)==t)&&(sum1(k)==m)){
                                    if(diff(i,j)==diff(j,k)){
                                        cout<<i<<" "<<j<<" "<<k<<endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
