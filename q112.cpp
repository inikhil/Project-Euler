#include<iostream>
using namespace std;
int increasing(int i){
    int m,n;
    m=i%10;
    i=i/10;
    while(i!=0){
        n=i%10;
        if(n<=m){
            m=n;
        }
        else{
            return false;
        }
        i=i/10;
    }
    return true;
}
int decreasing(int i){
    int m,n;
    m=i%10;
    i=i/10;
    while(i!=0){
        n=i%10;
        if(n>=m){
            m=n;
        }
        else{
            return false;
        }
        i=i/10;
    }
    return true;
}
int main(){
    int i,c=0,cunt=0;
    double m;
    for(i=101;c!=1;i++){
        if(increasing(i)==false){
            if(decreasing(i)==false){
                cunt++;
                m=(double)cunt/i;
                if(m==0.99){
                    cout<<i;
                    c=1;
                }
            }
        }
    }
}
