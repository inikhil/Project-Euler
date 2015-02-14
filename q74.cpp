#include<iostream>
#include<vector>
using namespace std;
vector<int> a;
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
int num(int k){
    int cunt=0,t;
    while(k!=0){
        t=k%10;
        cunt=cunt+fact(t);
        k=k/10;
    }
    return cunt;
}
void rem(){
    int i;
    while(a.size()!=0){
        a.pop_back();
    }
}
int check(int n){
    int j,t;
    for(j=0;j<a.size();j++){
        if(a[j]==n){
            return 1;
        }
    }
    return 0;
}
int main(){
    int i,cunt,m=-1,t=0,sum=0,k,n,j;
    for(i=1;i<1000000;i++){
        k=i;
        t=0;
        m=-1;
        cunt=0;
        while(t!=1){
            n=num(k);
            t=check(n);
            if(t==0){
                a.push_back(n);
                if(a.size()==59){
                    cout<<i<<endl;
                    sum++;
                }
                k=n;
            }
        }
        //cout<<"\n";
        a.clear();
        //rem();
    }
    cout<<sum;
}
