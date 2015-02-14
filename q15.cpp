#include<iostream>
#include<vector>
using namespace std;
double grid(int n,int m)//,vector<double> c,int b)
{
    int x;
    if((n==0)||(m==0)){
       return 1;
    }
    if((n==1)&&(m==1))
    {
        return 2;
    }
   /* if(m==n){
    x=b;
    while(x>1)
    {
        if((n==x)&&(m==x))
        {
            return c[x];
        }
        x=x-1;
    }
    }*/
    return grid(n-1,m)/*,c,b)*/+grid(n,m-1);//,c,b);
}
int main()
{
    double n,t=6;
    int m;
    int a[20][20];
    //vector<double> c;
    //c.push_back(1);
    //c.push_back(2);
    for(m=2;m<21;m++)
    {
        t=grid(m,m);//,c,m-1);
        //c.size();
        //c.push_back(t);
        printf("%0.0f",t);
        cout<<"\n";
    }
    printf("%0.0f",t);
    return 0;
}
