#include<iostream>
using namespace std;
bool pandg(int i,int j,int k)
{
    int m=i,n=j,r=k,prod=1,cunt,sum=0,dig=0,sq_sum=0;
    while(m!=0){
        cunt=m%10;
        dig++;
        prod=prod*cunt;
        sum+=cunt;
        sq_sum+=cunt*cunt;
        m=m/10;
    }
    while(n!=0){
        cunt=n%10;
        dig++;
        sum+=cunt;
        prod=prod*cunt;
        sq_sum+=cunt*cunt;
        n=n/10;
    }
    while(r!=0){
        cunt=r%10;
        dig++;
        sum+=cunt;
        prod=prod*cunt;
        sq_sum+=cunt*cunt;
        r=r/10;
    }
    if((prod==362880)&&(sum==45)&&(dig==9)&&(sq_sum==285)){
        return true;
    }
    return false;
}
int main()
{
    int i,j,k=0,sum=0,m=0;
        while(k!=10000){
            m=0;
            for(i=100;i<2000;i++){
                for(j=1;j<50;j++){
                    if(i*j==k){
                        if(pandg(i,j,k)==true){
                            //cout<<i<<" "<<j<<" "<<k<<endl;
                            sum+=k;
                            if(m==1)
                                sum=sum-k;
                            m=1;
                        }
                    }
                }
            }
            k++;
        }
    cout<<sum;
}
