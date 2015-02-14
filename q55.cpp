#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
double rev(double n)
{
    vector<int> reve;
    int d,c=0,i;
    double t=0;
    while(n!=0){
        d=fmod(n,10.0);
        //cout<<d<<" ";
        c++;
        reve.push_back(d);
        n=(double)n/10;
    }
    for(i=0;i<c;i++){
        t+=(double)reve[i]*pow(10.0,c-i-1);
    }
    return t;
}
bool is_palindrome(int n)
{
    int d,t,i;
    int m=n;
    vector<int> pali;
    while(m!=0){
        d=fmod(m,10.0);
        pali.push_back(d);
        m=m/10.0;
    }
    t=pali.size();
    for(i=0;i<t;i++){
        if(pali[i]!=pali[t-i]){
            return false;
        }
    }
    return true;
}
int main()
{
    int n,i,cont=0,m;
    double t;
    for(n=10;n<10000;n++){
        t=n;
        m=0;
        for(i=1;i<50;i++){
            t+=(double)rev(t);
            if(is_palindrome(t)==true){
                cont++;
                if(m==1){
                    cont--;
                }
                m=1;
            }
        }
    }
    cout<<9989-cont;
}
