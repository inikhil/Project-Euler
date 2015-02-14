#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
/*bool is_permute(long long m,long long n){
    int sum1=0,sq_sum1=0,cu_sum1=0,sum2=0,sq_sum2=0,cu_sum2=0,t=0,k1=0,k2=0;
    while(m!=0){
        t=fmod(m,10.0);sum1+=t;sq_sum1+=t*t;cu_sum1+=t*t*t;m=(long long)m/10,k1++;
        //cout<<t<<" "<<sum1<<" "<<sq_sum1<<" "<<cu_sum1<<" "<<m<<" "<<k1<<endl;
    }
    while(n!=0){
        t=fmod(n,10.0);sum2+=t;sq_sum2+=t*t;cu_sum2+=t*t*t;n=(long long)n/10,k2++;
        //cout<<t<<" "<<sum2<<" "<<sq_sum2<<" "<<cu_sum2<<" "<<n<<" "<<k2<<endl;
    }
    if(sum1==sum2 && sq_sum1==sq_sum2 && cu_sum1==cu_sum2 && k1==k2){return true;}
    return false;
}*/
bool is_permute(long long m,long long n){
    int *c=new int[10];int *d=new int[10];
    int i,t;
    for(i=0;i<10;i++){c[i]=0;d[i]=0;}
    while(m!=0){
        t=fmod(m,10.0);c[t]++;m=(long long)m/10;
    }
    while(n!=0){
        t=fmod(n,10.0);d[t]++;n=(long long)n/10;
    }
    for(i=0;i<10;i++){
        if(c[i]!=d[i]){delete[] c;delete[] d;return false;}
    }
    delete[] c;
    delete[] d;
    return true;
}
int main(){
    int i,j,t,k=0;
    int *a=new int[5000];long long *b=new long long[5000];
    for(i=0;i<5000;i++){
        a[i]=i+5000;
        b[i]=(long long)a[i]*a[i]*a[i];
    }
    for(i=0;i<5000;i++){
        t=0;
        for(j=i+1;j<5000;j++){
            if(is_permute(b[i],b[j])==true){t++;}//cout<<a[i]<<" "<<a[j]<<" ";}
        }
        //if(t>0){cout<<"\n";}
        if(t==4){k=a[i];break;}
    }
    cout<<(long long)k*k*k;
   // cout<<a[0]<<" "<<a[1]<<endl;
    //cout<<b[0]<<" "<<b[1]<<endl;
    //is_permute(b[0],b[1]);
}
