#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int n)
{
    int i;
    if(n%2==0){
        return false;
    }
    if(n==2||n==3||n==5||n==7){
        return true;
    }
    for(i=3;i<=sqrt(n);i=(i+2)){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b,n,cont,d=0,e,t;
    for(a=-999;a<1000;a++)
    {
        for(b=0;b<1000;b++)
        {
            cont=0;
            n=0;
            t=n*n+a*n+b;
            while(is_prime(t)==true){
                n++;
                cont++;
                t=n*n+a*n+b;
                if(t<0)
                    t=10;
            }
            if(cont>d){
                d=cont;
                e=a*b;
            }
        }
    }
    cout<<e;
}
