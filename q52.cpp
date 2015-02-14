#include<iostream>
#include<cmath>
using namespace std;
int is_permuted(int x)
{
    int m=x,sum=0,sum_sq=0,sum_pr=1,d;
    while(m!=0){
        d=m%10;
        sum+=d;
        sum_sq+=d*d;
        sum_pr=sum_pr*d;
        m=m/10;
    }
    return sum_sq;
}
int main()
{
    int x;
    for(x=100000;x<170000;x++){
        if((is_permuted(x)==is_permuted(2*x))&&(is_permuted(x)==is_permuted(3*x))&&(is_permuted(x)==is_permuted(4*x))&&(is_permuted(x)==is_permuted(5*x))&&(is_permuted(x)==is_permuted(6*x))){
            cout<<x;
            return 0;
        }
    }
}
