#include<iostream>
#include<cmath>
using namespace std;
bool is_divisible(double a)
{

    int j;
    double i;
    i=a;
    for(j=1;j<21;j++)
    {
        if(fmod(i,j)!=0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    double i=20,m=1;
    while(m>0)
    {
        if(is_divisible(i)==true)
        {
            printf("%0.0f",i);
            m=0;
        }
        else
        {
            i=i+20;
        }
    }
    return 0;
}
