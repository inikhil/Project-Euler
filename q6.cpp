#include<iostream>
using namespace std;
int sum_sq()
{
    int count=0,i;
    for(i=1;i<=100;i++)
    {
        count=count+i*i;
    }
    return count;
}
int sq_sum()
{
    int count=0,i;
    for(i=1;i<=100;i++)
    {
        count=count+i;
    }
    count=count*count;
    return count;
}

int main()
{
    int a,b;
    a=sq_sum();
    b=sum_sq();
    cout<<a<<" "<<b<<endl;
    cout<<a-b<<endl;
    return 0;
}
