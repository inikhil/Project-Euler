#include<iostream>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<cstdio>
using namespace std;
using namespace std;
string pandg[3628800];
int k=0;
bool is_property(string num)
{
    int i,j=0,m;
    double t;
    int b[7]={2,3,5,7,11,13,17};
    for(i=1;i<8;i++){
        t=100*(num[i]-48)+10*(num[i+1]-48)+(num[i+2]-48);
        if(fmod(t,b[j])!=0){
            return false;
        }
        j++;
        if(j==7){
            return true;
        }
    }
}
int permute(char a[], int i, int n)
{
   int j;
   if (i == n){
        pandg[k]=a;
        //cout<<a<<" ";
        k++;
   }
   else
   {
       for (j = i;j <= n;j++)
       {
          swap(a[i], a[j]);
          permute(a, i+1, n);
          swap(a[i], a[j]);
       }
   }
}
double convert(string nu)
{
    int i,j;
    double valu;
    valu=0;
    for(j=0;j<10;j++){
        valu+=(nu[j]-48)*pow(10.0,9-j);
    }
    return valu;
}
int main()
{
    int i;
    double sum=0;
    char a[]="1234567890";
    /*if(is_property("1406357289")==true){
        cout<<"wdscnds";
    }*/
    permute(a,0,9);
    /*for(i=0;i<3265920;i++){
        cout<<pandg[i]<<" ";
    }*/
    for(i=0;i<3265920;i++){
        if(is_property(pandg[i])==true){
            sum=sum+convert(pandg[i]);
        }
    }
    printf("%0.0f",sum);
    return 0;
}
