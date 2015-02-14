#include<iostream>
#include<cmath>
using namespace std;
/*int lowerfrac(int n,int m)
{
    int i;
    for(i=n-1;i>=2;i--){
        if((n%i==0)&&(m%i==0)){
           n=n/i;
           m=m/i;
        }
    }
}*/
int main()
{
    double a,b,c;
    double t,m,p,q,t1=1,m1=1;
    for(a=1;a<=9;a++){
        for(b=1;b<=9;b++){
            for(c=1;c<=9;c++){
                t=10*a+b;
                m=10*b+c;
                p=t/m;
                q=a/c;
                if((p==q)&&(t<m)){
                    cout<<t<<" "<<m<<endl;
                    t1=t1*t;
                    m1=m1*m;
                }
                t=10*a+b;
                m=10*c+b;
                p=t/m;
                if((p==q)&&(t<m)){
                    cout<<t<<" "<<m<<endl;
                    t1=t1*t;
                    m1=m1*m;
                }
                t=10*b+a;
                m=10*b+c;
                p=t/m;
                if((p==q)&&(t<m)){
                    cout<<t<<" "<<m<<endl;
                    t1=t1*t;
                    m1=m1*m;
                }
                t=10*b+a;
                m=10*c+b;
                p=t/m;
                if((p==q)&&(t<m)){
                    cout<<t<<" "<<m<<endl;
                    t1=t1*t;
                    m1=m1*m;
                }
            }
        }
    }
    cout<<t1/m1;
    return 0;
}
