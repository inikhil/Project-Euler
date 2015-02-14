#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    int i,j;
    double m,sum=1;
    for(i=2;i<=1000;i++){
        m=i;
        for(j=2;j<=i;j++){
            m=fmod(m*i,10000000000.0);
        }
        sum=sum+fmod(m,10000000000.0);
        sum=fmod(sum,10000000000.0);
    }
    printf("%0.0f",sum);
    //cout<<sum;
}
