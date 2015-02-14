#include<iostream>
using namespace std;
int main()
{
    int i,j=1;
    double sum=1;
    for(i=3;i<=1001;i=(i+2))
    {
        sum+=4*i*i-12*j;
        j++;
    }
    printf("%0.0f",sum);
}
