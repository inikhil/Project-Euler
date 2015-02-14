#include<iostream>
#include<cmath>
using namespace std;
class node{
    public:
    node(int n,int ra){
        n1=n;
        radi=ra;
    }
    int n1;
    int radi;
};
bool is_prime(int n){
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int rad(int n){
    int t=1,i;
    if(is_prime(n)==true){
        return n;
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            if(is_prime(i)==true){
                t=t*i;
                if(t==n){
                    return t;
                }
            }
        }
    }
    return t;
}
int main(){
    int *a,i,j;
    a=new int[100001];
    a[0]=0;
    for(i=1;i<100001;i++){
        a[i]=rad(i);
    }
    /*for(i=0;i<100;i++){
        cout<<a[i]<<" ";
    }*/
    node **p;
    int m1,m2;
    p=new node*[100001];
    for(i=0;i<100001;i++){
       p[i]=new node(i,a[i]);
    }
    /*for(i=0;i<100;i++){
        cout<<p[i]->radi<<" ";
    }*/
    for(i=0;i<10001;i++){
        for(j=i;j<100001;j++){
            if(p[j]->radi<p[i]->radi){
                m1=p[j]->n1;
                m2=p[j]->radi;
                p[j]->radi=p[i]->radi;
                p[j]->n1=p[i]->n1;
                p[i]->n1=m1;
                p[i]->radi=m2;
            }
            if(p[j]->radi==p[i]->radi){
                if(p[j]->n1<p[i]->n1){
                    m1=p[j]->n1;
                    m2=p[j]->radi;
                    p[j]->radi=p[i]->radi;
                    p[j]->n1=p[i]->n1;
                    p[i]->n1=m1;
                    p[i]->radi=m2;
                }
            }
        }
    }
    cout<<p[10000]->n1<<endl;
}
