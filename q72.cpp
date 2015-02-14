#include<iostream>
using namespace std;
int hcf(int i,int j){
    int t;
    while(i%j!=0){
        t=j;
        j=i%j;
        i=t;
    }
    return j;
}
int main(){
    int i,j;
    double m;
    int cunt[100000];
    for(i=0;i<100000;i++){
        cunt[i]=0;
    }
    cout<<"dsdcs";
    for(i=100000;i>=1;i--){
        for(j=i-1;j>=1;j--){
             if(hcf(i,j)==1){
                    cunt[i-1]=cunt[i-1]+1;
            }
        }
    }
    for(i=0;i<1000000;i++){
        cout<<cunt[i]<<" ";
    }
}

