#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int n)
{
    int i;
    if(n==2||n==3||n==5||n==7)
        return true;
    if(n%2==0)
        return false;
    for(i=3;i<=sqrt(n);i=(i+2)){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool distinct(int n)
{
    int i,cont=0;
    if(n%2==0){
        cont++;
    }
    for(i=3;i<n/2;i=(i+2)){
        if(n%i==0){
            if(is_prime(i)==true){
                cont++;
            }
        }
    }
    if(cont==4){
        return true;
    }
    return false;
}
int main()
{
    int i;
    for(i=100000;i<200000;i++){
        if((distinct(i)==true)&&(distinct(i+1)==true)&&(distinct(i+2)==true)&&(distinct(i+3)==true)){
            cout<<i<<endl;
            return 0;
        }
    }
}
