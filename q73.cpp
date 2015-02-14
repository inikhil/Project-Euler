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
    int i,j,cunt=0;
    double m;
    for(i=12000;i>=1;i--){
        for(j=i-1;j>=1;j--){
            if(hcf(i,j)==1){
                m=(double)j/i;
                if((m>(double)1/3)&&(m<0.5)){
                    cunt++;
                }
            }
        }
    }
    cout<<cunt;
}
