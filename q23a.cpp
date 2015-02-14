#include<iostream>
#include<vector>
using namespace std;
bool is_abundant(int n)
{
    int i,cunt=1;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            cunt+=i;
        }
    }
    if(n<cunt){
        return true;
    }
    return false;
}
void sum_abund(vector<int> su)
{
    int i;
    double sum=0,t;
    for(i=0;i<su.size();i++){
        sum+=su[i];
    }
    t=28123*28124/2;
    t=t-sum;
    printf("%0.0f",t);
}
void print(vector<int> abund)
{
    int i;
    for(i=0;i<abund.size();i++){
        cout<<abund[i]<<" ";
    }
}
void sum(vector<int> abund)
{
    vector<int> su;
    int i,j,sum=0,t=0,m=0,k;
    for(i=0;t<28123;i++){
        for(j=i;t<28123;j++){
            m=0;
            t=abund[i]+abund[j];
            for(k=0;k<su.size();k++){
                if((su[k]==t)||(t>28123)){
                    m=1;
                }
            }
            if(m==0){
                su.push_back(t);
            }
        }
        t=0;
    }
    print(su);
    //sum_abund(su);
}
void sum1(vector<int> abund)
{
    vector<int> su;
    int i,j=0,sum=0,t=0,n,m,k=0;
    for(n=1;n<28123;n++){
        t=0;
        m=0;
        i=0;
        while(abund[i]<n){
            j=i;
            while(k!=2){
                t=abund[i]+abund[j];
                if(t==n){
                    m=1;
                    k=2;
                    cout<<n<<" ";
                }
                if(t>n){
                    k=2;
                }
                j++;
            }
            if(m!=1){
                k=0;
            }
            i++;
        }
        if(m==0){
            sum+=n;
        }
    }
    //print(su);
    cout<<sum;
}
int main(){
    int n;
    vector<int> abund;
    for(n=1;n<28123;n++){
        if(is_abundant(n)==true){
            abund.push_back(n);
        }
    }
    //print(abund);
    //sum(abund);
    sum1(abund);
    return 0;
}
