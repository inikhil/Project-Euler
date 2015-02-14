#include<iostream>
using namespace std;
int main()
{
    int b,c,d,e,f,g,h,a=200,m=2;
    for(h=1;h>=0;h--)
    {
        for(g=4;g>=0;g--)
        {
            for(f=10;f>=0;f--)
            {
                for(e=20;e>=0;e--)
                {
                    for(d=40;d>=0;d--)
                    {
                        for(c=100;c>=0;c--)
                        {
                            for(b=200;b>=0;b--)
                            {
                                if((100*h+50*g+20*f+10*e+5*d+2*c+1*b)==a)
                                    //cout<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<endl;
                                    m++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<m;
    return 0;
}
