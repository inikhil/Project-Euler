#include<iostream>
using namespace std;
double func(int a,int b,int c)
{
    double count=0;
    if((b==1)&&(c==0))
    {
        count=count+3;
    }
    if((b!=1)&&((c==1)||(c==2)||(c==6)))
    {
        count=count+3;
    }
    if((b!=1)&&((c==4)||(c==5)||(c==9)))
    {
        count=count+4;
    }
    if((b!=1)&&((c==7)||(c==8)||(c==3)))
    {
        count=count+5;
    }
    if((b==2)||(b==3)||(b==8)||(b==9))
    {
        count=count+6;
    }
    if((b==1)&&((c==1)||(c==2)))
    {
        count=count+6;
    }
    if((b==5)||(b==6)||(b==4))
    {
        count=count+5;
    }
    if((b==7)||((b==1)&&((c==5)||(c==6))))
    {
        count=count+7;
    }
    if((b==1)&&((c==3)||(c==4)||(c==8)||(c==9)))
    {
        count=count+8;
    }
    if((b==1)&&(c==7))
    {
        count=count+9;
    }
    if(((a==1)||(a==2)||(a==6))&&((b!=0)||(c!=0)))
    {
        count=count+13;
    }
    if(((a==4)||(a==5)||(a==9))&&((b!=0)||(c!=0)))
    {
        count=count+14;
    }
    if(((a==7)||(a==8)||(a==3))&&((b!=0)||(c!=0)))
    {
        count=count+15;
    }
    if((b==0)&&(c==0)&&((a==1)||(a==2)||(a==6)))
    {
        count=count+10;
    }
    if((b==0)&&(c==0)&&((a==4)||(a==5)||(a==9)))
    {
        count=count+11;
    }
    if((b==0)&&(c==0)&&((a==7)||(a==8)||(a==3)))
    {
        count=count+12;
    }
    return count;
}

int main()
{
    int a,b,c;
    double count=0;
    for(a=0;a<10;a++)
    {
        for(b=0;b<10;b++)
        {
            for(c=0;c<10;c++)
            {
                count=count+func(a,b,c);
                cout<<a<<b<<c<<"->"<<count<<endl;
            }
        }
    }
    cout<<count+11;
    return 0;
}
