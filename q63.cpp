#include<iostream>
using namespace std;
int is_digit(int m,int n){
    int cunt=0;
    while(m!=0){
        cunt++;
        m=m/10;
    }
    if(cunt==n){
        return true;
    }
    return false;
}
int main(){
    int i,j,t=1,m,cunt=21;
    double mm=1;
    for(i=1;i<9;i++){
        for(j=1;j<11;j++){
            m=j;
            t=1;
            while(m!=0){
               t=t*i;
               m--;
            }
            if(is_digit(t,j)==true){
                cunt++;
            }
        }
    }
    cout<<cunt;
}
