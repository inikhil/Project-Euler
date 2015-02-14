#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i,j,a,b,c,d,m,t=5,i1,i2;
    for(i=10;i<=100;i++){
        for(j=10;j<=100;j++){
            m=(i*(i+1)*j*(j+1))/4;
            //cout<<m<<" ";
            if(abs(2000000-m)<t){
                t=abs(2000000-m);
                i1=i;
                i2=j;
            }
        }
    }
    cout<<i1*i2;
}
