#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //double t=(double)pow(10.0,12.0);
    double t=120;
    double i,m,n,k;
    for(i=(double)t/2;i<t;i=(i+1)){
        m=(double)i/t;
        n=(double)(i-1)/t;
        //cout<<n<<endl;
        k=m*n;
        if(k==0.5){
            cout<<i;
            return 0;
        }
    }

}
