#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool is_prime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int is_circ(int n)
{
    int m=n,d,t,i,j,k=0,p,q;
    vector<int> ar;
    while(m!=0){
        d=m%10;
        ar.push_back(d);
        m=m/10;
        if(d%2==0)
            return 0;
    }
    t=ar.size();
    for(i=0;i<t;i++){
        k=0;
        for(j=0;j<t;j++){
            k+=pow(10.0,j)*ar[j];
        }
        if(is_prime(k)==true){
            q=ar[0];
            for(p=0;p<t-1;p++){
                ar[p]=ar[p+1];
            }
            ar[t-1]=q;
        }
        else
            return 0;
    }
    return 1;
}
int main()
{
    int i,cunt=4;
    for(i=11;i<1000000;i=(i+2)){
        if(is_circ(i)==1)
            cunt++;
    }
    cout<<cunt;
}
