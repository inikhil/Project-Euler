#include<iostream>
#include<cmath>
using namespace std;
int hcf(int j,int i){
    int k;
    if(i%j==0){
        return 0;
    }
    for(k=2;k<=sqrt(i);k++){
        if((i%k==0)&&(j%k==0)){
            return 0;
        }
    }
    return 1;
}
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
    int i,j=1,cunt,k,l;
    double m=0,t;
    int *b;
    for(i=950000;i<=1000000;i++){
        if(is_prime(i)==false){
            cunt=1;
            b=new int[i];
            b[0]=1;
            b[1]=1;
            for(l=2;l<i;l++){
                b[l]=0;
            }
            for(j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    if(b[j]!=1){
                        for(l=j;l<=(i-j);l=(l+j)){
                            b[l]=1;
                        }
                    }
                }
            }
            for(l=0;l<i;l++){
            //cout<<b[l]<<" ";
                if(b[l]==0){
                    cunt++;
                }
            }
        //cout<<"\n";
            t=(double)i/cunt;
        //cout<<t<<endl;
            if(t>=m){
                m=t;
                k=i;
                cout<<m<<" ";
                cout<<k<<endl;
            }
            delete[] b;
        }
    }
    cout<<k;
}
