#include<iostream>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<cstdio>
using namespace std;
bool is_property(vector<int> num)
{
    int i,j=0;
    double t;
    double b[7]={17,13,11,7,5,3,2};
    for(i=0;i<8;i++){
        t=100*num[i+2]+10*num[i+1]+num[i];
        if(fmod(t,b[j])!=0){
            return false;
        }
        j++;
        if(j==7){
            return true;
        }
    }
}
/*bool is_pandigital(double n)
{
    int i,d,j;
    double m=n;
    vector<int> num;
    d=fmod(m,10.0);
    num.push_back(d);
    m=m/10;
    for(i=0;i<10;i++){
        d=fmod(m,10.0);
        for(j=0;j<num.size();j++){
            if(num[j]==d){
                return false;
            }
        }
        num.push_back(d);
        m=m/10;
    }
    if(is_property(num)==true){
        return true;
    }
    return false;
}*/
int main()
{
    double n,m=1000000000,sum=0;
    for(n=m;n<=4000000000;n=(n+1)){
        if(is_pandigital(n)==true){
            sum+=n;
            cout<<n<<endl;
        }
    }
    printf("%0.0f",sum);
}
