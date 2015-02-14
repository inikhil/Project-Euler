#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

bool is_prime(int n){
    int i;
    if(n%2==0){return false;}
    else{
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){return false;}
        }
    }
    return true;

}

int main(){
    int i,j,k,m=0;
    int *a=new int[40];
    a[0]=1;a[1]=2;a[2]=3;j=3;
    for(i=5;i<=100;i++){
        if(is_prime(i)==true){
            a[j]=i;j++;
        }
    }
    k=j;
    int **b=new int*[72];
    for(i=0;i<=72;i++){b[i]=new int[j];}
    for(i=0;i<=72;i++){b[i][0]=0;}
    for(j=0;j<k;j++){b[0][j]=1;}
    for(i=1;i<=72;i++){
        for(j=1;j<k;j++){
            if(i-a[j]>=0)
                b[i][j]=b[i-a[j]][j]+b[i][j-1];
            else
                b[i][j]=b[i][j-1];
            if(b[i][j]>=5000){cout<<i<<" ";m=1;break;}
        }
        if(m==1){break;}
    }
   /* for(i=0;i<=72;i++){
        for(j=0;j<k;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }*/


}
