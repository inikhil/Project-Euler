#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> prim;
int f[5];
bool is_prime(int n){
    int i;
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool iscat(int a,int b){
    int m=a,n=b,t=0,k=0,i,x,y;
    //cout<<m<<" ";
    //cout<<n<<" ";
    while(m!=0){
        t++;
        m=m/10;
    }
    //cout<<t<<" ";
    while(n!=0){
        k++;
        n=n/10;
    }
    //cout<<k<<" ";
    x=a;
    y=b;
    m=a;
    n=b;
    for(i=t;i<t+k;i++){
        x+=(n%10)*pow(10.0,i);
        n=n/10;
    }
    //cout<<x<<" ";
    for(i=k;i<t+k;i++){
        y+=(m%10)*pow(10.0,i);
        m=m/10;
    }
    //cout<<y<<" ";
    if(is_prime(x)==true){
        if(is_prime(y)==true){
            return true;
        }
    }
    return false;
}
bool check(int a,int b,int c,int d){
    int i,j;
    f[0]=a;
    f[1]=b;
    f[2]=c;
    f[3]=d;
    //f[4]=e;
    for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            if(iscat(f[i],f[j])==false){
                return false;
            }
        }
    }
    //cout<<"scfnhisi";
    return true;
}
void print(){
    int i;
    for(i=0;i<prim.size();i++){
        cout<<prim[i]<<" ";
    }
}
int main()
{
    int i,t,j,k,m,n,sum=1000000,p;
    for(i=2;i<1000;i++){
        if(is_prime(i)==true){
            prim.push_back(i);
        }
    }
    t=prim.size();
    /*if(check(3,7,109,673)==true){
        return 7;
    }*/
   //print();
    for(i=0;i<t;i++){
        for(j=i+1;j<t;j++){
            for(k=j+1;k<t;k++){
                for(m=k+1;m<t;m++){
                    //for(n=m+1;n<t;n++){
                    cout<<prim[i]<<prim[j]<<prim[k]<<prim[m]<<" ";
                        if(check(prim[i],prim[j],prim[k],prim[m])==true){
                            p=i+j+k+m;
                            if(p<sum){
                                sum=p;
                            }
                        }
                    //}
                }
            }
        }
    }
    cout<<sum;
}
