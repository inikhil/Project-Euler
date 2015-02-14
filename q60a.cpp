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
bool check(int m,int n){
    int l_m=0,l_n=0,a=m,b=n,i,j;
    while(a!=0){
        l_m++;
        a=a/10;
    }
    while(b!=0){
        l_n++;
        b=b/10;
    }
    i=m*pow(10.0,l_n)+n;
    if(is_prime(i)==false){
        return false;
    }
    i=n*pow(10.0,l_m)+m;
    if(is_prime(i)==false){
        return false;
    }
    return true;
}
int main(){
    int i,j,k,l,m,t=0;;
    for(i=3;t!=1;i++){
        if(is_prime(i)==true){
            for(j=i+2;j<6000;j=(j+2)){
                if(is_prime(j)==true){
                    if(check(i,j)==true){
                        for(k=j+2;k<6000;k=(k+2)){
                            if(is_prime(k)==true){
                                if(check(i,k)==true){
                                    if(check(j,k)==true){
                                        for(l=k+2;l<10000;l=(l+1)){
                                            if(is_prime(l)==true){
                                                if(check(i,l)==true){
                                                    if(check(j,l)==true){
                                                        if(check(k,l)==true){
                                                            for(m=(l+2);m<10000;m=(m+2)){
                                                                if(is_prime(m)==true){
                                                                    if(check(i,m)==true){
                                                                        if(check(j,m)==true){
                                                                            if(check(k,m)==true){
                                                                                if(check(l,m)==true){
                                                                                    cout<<i+j+k+l+m<<endl;
                                                                                    t=1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
