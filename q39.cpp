#include<iostream>
using namespace std;
int main()
{
    int p,a,b,c,m=0,cnt=0,q=0;
    for(p=1;p<=1000;p++){
        for(a=1;a<=333;a++){
            for(b=a;b<=500;b++){
                c=p-a-b;
                if((c*c==a*a+b*b)&&(c>0)&&(c>a)&&(c>b)){
                        m++;
                }
            }
        }
        if(m>cnt){
            cnt=m;
            q=p;
        }
        m=0;
    }
    cout<<q;
    return 0;
}
