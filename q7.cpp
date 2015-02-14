#include<iostream>
using namespace std;
bool prime(int n)
{
    int i;
    for(i=3;i<n;i+=2)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int j=2,i;
    for(i=5;j<10001;i+=2)
    {
        if(prime(i)==true)
        {
            j++;
            //cout<<i<<" "<<j<<endl;
        }
    }
    cout<<i-2;
    return 0;
}

