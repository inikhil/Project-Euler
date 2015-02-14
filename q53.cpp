#include<iostream>
using namespace std;
double fact(double n)
{
    if(n==1||n==0)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int cnt=0,i;
    double r,j,n;
    for(n=1;n<=100;n=(n+1)){
        r=0;
        while(r<=n){
            j=fact(n)/(fact(r)*fact(n-r));
            if(j>1000000)
                cnt++;
            r++;
        }
    }
    cout<<cnt;
}
