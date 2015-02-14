#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b,c,l,cunt=0;
    for(l=12;l<=1500000;l++){
        for(a=l/6;a<=l/3;a++){
            for(b=l/3;b<(2*l/3);b++){
                for(c=l/3;c<a+b;c++){
                    if(l==(a+b+c)){
                        if((c*c)==(a*a+b*b)){
                            cout<<a<<" "<<b<<" "<<c<<" "<<l<<endl;
                            cunt++;
                            a=l+1;
                            c=l+1;
                            b=l+1;
                        }
                    }
                }
            }
        }
    }
    cout<<cunt;
}
