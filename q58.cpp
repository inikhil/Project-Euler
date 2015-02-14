#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool is_prime(int n)
{
    int i;
    if(n==2||n==3){
        return true;
    }
    if(n%2==0)
        return false;
    for(i=3;i<=sqrt(n);i=(i+2)){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> diag;
    diag.push_back(1);
    int k=3,n=1,cont=0,i;
    double t;
    while(true){
        diag.push_back(k*k);
        diag.push_back(k*k-6*n);
        diag.push_back(k*k-4*n);
        diag.push_back(k*k-2*n);
        for(i=4*n-3;i<4*n+1;i++){
            if(is_prime(diag[i])==true){
                cont++;
            }
        }
        t=(double)cont/(4*n+1);
        k=k+2;
        if(t<0.1){
            cout<<2*n+1;
            return 0;
        }
        n++;
    }
}
