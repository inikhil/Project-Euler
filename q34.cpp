#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1||n==0)
        return 1;
    return n*fact(n-1);
}
bool sumfact(int n)
{
    int i,t=n,m,sum=0,j=0;
    while(t!=0)
    {
        j++;
        t=t/10;
    }
    t=n;
    for(i=0;i<j;i++){
        m=t%10;
        t=t/10;
        sum+=fact(m);
    }
    if(sum==n)
        return true;
    return false;
}
int main()
{
    int i;
    double sum=0;
    for(i=10;i<2550000;i++){
        if(sumfact(i)==true){
            sum=sum+i;
            //cout<<i<<endl;
        }
    }
    cout<<sum;
}
