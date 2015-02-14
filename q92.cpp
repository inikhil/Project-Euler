#include<iostream>
using namespace std;
int sum(int k){
    int m=k,t,cunt=0;
    while(m!=0){
        t=m%10;
        cunt+=t*t;
        m=m/10;
    }
    return cunt;
}

int main(){
    int n=1,k,m,t,cunt=0,cunt1=0,d;
    while(n!=10000000){
        k=n;
        m=0;
        //cout<<n<<" ";
        while(m!=1){
            if(k==89){
                cunt++;
                m=1;
            }
            if(k==1){
                cunt1++;
                m=1;
            }
            k=sum(k);
            //cout<<k<<" ";
        }
        n++;
        //cout<<"\n";
    }
    cout<<cunt<<endl;
    cout<<cunt1<<endl;
    cout<<cunt+cunt1<<endl;
}
