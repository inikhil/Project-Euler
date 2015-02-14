#include<iostream>
#include<vector>
using namespace std;
bool is_pent(int t){
    int j=0,m=0;
    for(j=1;m<t;j++){
        m=(j*(3*j-1))/2;
        if(m==t){
            //cout<<j;
            return true;
        }
    }
    return false;
}
int main(){
    int i,j,t,m,k=0;
    for(i=1000;k!=1;i++){
        for(j=i+1;j<(i+2000);j++){
            t=(j*(3*j-1))/2-(i*(3*i-1))/2;
            if(is_pent(t)==true){
                m=(j*(3*j-1))/2+(i*(3*i-1))/2;
                if(is_pent(m)==true){
                    k=1;
                    cout<<t<<endl;
                }
            }
        }
    }
}

