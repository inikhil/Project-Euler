#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int x,y,t,i,n;
    long long mul,sum;
   // int *a=new int[1000];
    for(n=10000;n<100000;n++){
        t=0;
        for(y=n+1;y<n+100000000;y++){
            mul=(long long)n*y;sum=y-n;
            if(fmod(mul,sum)==0){t++;}
        }
        //a[n-1000]=t;
        //cout<<t<<" ";
        if(t>500){cout<<n<<" ";}
        if(t>1000){cout<<n;break;}
    }
  //  for(i=0;i<1000;i++){
    //    cout<<a[i]<<" ";
    //}

}
