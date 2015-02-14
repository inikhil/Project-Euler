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
    int n,t=6;
    int m,i,j;
    double a[21][21];
    for(i=0;i<21;i++)
    {
        for(j=0;j<21;j++)
        {
            a[i][j]=0;
        }
    }
    cout<<"\n";
    i=1;
    while(i!=21)
    {
        a[i][0]=1;
        //cout<<i<<"->"<<a[i][0]<<" ";
        i++;
    }
    cout<<"\n";
    i=1;
    for(i=1;i<21;i++)
    {
        a[0][i]=1;
       // cout<<i<<"->"<<a[0][i]<<" ";
    }
    /*while(i!=21)
    {
        a[0][i]=1;
        cout<<i<<"->"<<a[0][i]<<" ";
        i++;
    }*/
    cout<<"\n";
    //cout<<a[0][1]<<endl;
    //cout<<a[1][0]<<endl;
    for(n=1;n<21;n++)
    {
        for(m=1;m<21;m++)
        {
            a[n][m]=a[n-1][m]+a[n][m-1];
            //cout<<n<<" "<<m<<" "<<a[n][m]<<endl;
        }
    }
    printf("%0.0f",a[20][20]);
    return 0;
}

