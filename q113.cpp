#include<iostream>
using namespace std;
bool increasing(int* a){
    int i,m=0,t;
    for(i=10;m!=1;i--){
        if(a[i]!=0){
            m=1;
            t=i;
        }
    }
    for(i=0;i<t;i++){
        if(a[i]<a[i+1]){
            return false;
        }
    }
    return true;
}
bool decreasing(int* a){
    int i,m=0,t;
    for(i=10;m!=1;i--){
        if(a[i]!=0){
            m=1;
            t=i;
        }
    }
    for(i=0;i<t;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int i,t,m,cunt=100;
    int *a=new int[11];
    for(i=0;i<11;i++){
        a[i]=0;
    }
    a[2]=1;
    while(a[10]!=1){
        t=1;
        for(i=0;i<11;i++){
            m=a[i]+t;
            a[i]=m%10;
            t=m/10;
        }
        if(increasing(a)==true){
            cunt++;
            cout<<cunt<<" ";
        }
        else if(decreasing(a)==true){
            cunt++;
            cout<<cunt<<" ";
        }
    }
    cout<<cunt;
}
