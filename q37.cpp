#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool is_prime(int n)
{
    int i;
    if(n==1)
        return false;
    if(n==2||n==3)
        return true;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}
bool is_leftcirc(int n)
{
    int m=n,d,t,i,j,k=0,p,q;
    vector<int> ar;
    while(m!=0){
        d=m%10;
        ar.push_back(d);
        m=m/10;
    }
    t=ar.size();
    while(t!=0){
        k=0;
        for(j=0;j<t;j++){
            k+=pow(10.0,j)*ar[j];
        }
        if(is_prime(k)==true)
            ar.pop_back();
        else
            return false;
        t=ar.size();
    }
    return true;
}
bool is_rightcirc(int n)
{
    while(n!=0){
        if(is_prime(n)==true)
            n=n/10;
        else
            return false;
    }
    return true;
}
int main()
{
    int i=11,cunt=0,sum=0;
    while(cunt!=11){
        if(is_leftcirc(i)==true){
            if(is_rightcirc(i)==true){
                cunt++;
                sum=sum+i;
            }
        }
        i=i+2;
    }
    cout<<sum;
}
