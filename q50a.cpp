#include<iostream>
#include<cmath>
using namespace std;
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
    int i,cunt=0,m=1,j,t=0,n=0,m1,d=0;
    int *a=new int[1000000];
    a[0]=2;
    for(i=3;i<1000000;i++){
        if(is_prime(i)==true){
            a[m]=i;
            m++;
        }
    }
    for(i=0;i<800;i++){
        t=0;
        cunt=0;
        d=0;
        for(j=i;d!=1;j++){
            t=t+a[j];
            cunt++;
            if(t>1000000){
                t=t-a[j];
                cunt--;
                d=1;
            }
            if(is_prime(t)==true){
                if(cunt>n){
                    n=cunt;
                    m1=t;
                }
            }
        }
    }
    cout<<m1<<" "<<n<<" ";
}
