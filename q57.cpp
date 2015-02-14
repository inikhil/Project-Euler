#include<iostream>
#include<cmath>
using namespace std;
int c[1000],d[1000];
bool is_morenum()
{
    int m=0,n=0,i=0,e=0;
    for(i=999;e!=1;i--){
        if(c[i]==0){
            m++;
        }
        else{
            e=1;
        }
    }
    e=0;
    m=1000-m;
    //cout<<m<<" ";
    for(i=999;e!=1;i--){
        if(d[i]==0){
            n++;
        }
        else{
            e=1;
        }
    }
    n=1000-n;
    //cout<<n<<" ";
    if(m>n){
        return true;
    }
    return false;
}
int* sum1(int *a,int *b)
{
    int t=0,i,m,j;
    for(i=0;i<1000;i++){
        m=a[i]+b[i]+t;
        c[i]=m%10;
        t=m/10;
    }
}
int main(){
    int i,cunt=0,j;
    int a[1000],b[1000];
    a[0]=3;
    b[0]=2;
    for(i=1;i<1000;i++){
        a[i]=0;
        b[i]=0;
    }
    for(i=1;i<1000;i++){
        sum1(a,b);
        for(j=0;j<1000;j++){
            d[j]=c[j];
        }
        sum1(c,b);
        if(is_morenum()==true){
            cunt++;
        }
        for(j=0;j<1000;j++){
            a[j]=c[j];
            b[j]=d[j];
        }
    }
    cout<<cunt;
    return 0;
}
