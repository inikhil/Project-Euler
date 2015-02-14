#include<iostream>
#include<cmath>
using namespace std;
double odd(double n)
{
    return 3*n+1;
}
double even(int n)
{
    return n/2;
}
bool find(double n)
{
    if(fmod(n,2)==0)
    {
        return true;
    }
    return false;
}
int main(){
    double n,count=1,t=0,i,m;
    for(n=1000000;n>1;n--){
        i=n;
        count=1;
        while(i!=1){
            if(fmod(i,2)==0){
                i=i/2;
                count=count+1;
                //cout<<i<<" ";
            }
            else{
                i=3*i+1;
                count=count+1;
                //cout<<i<<" ";
            }
        }
        if(count>t){
            t=count;
            m=n;
        }
    }
    cout<<m<<" "<<t<<endl;
}
