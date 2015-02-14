#include<iostream>
using namespace std;
int main(){
    int a,n,r=0;
    for(a=3;a<=1000;a++){
        if(a%2==0){
            n=a/2-1;
        }
        else{
            n=a/2;
        }
        r=r+2*n*a;
    }
    cout<<r;
}
