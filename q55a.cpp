#include<iostream>
#include<vector>
using namespace std;
vector<int> a,b,c;
void build_array(int n){
    int i;
    for(i=0;n!=0;i++){
        a.push_back(n%10);
        n=n/10;
    }
}
void rever_array(){
    int i;
    for(i=a.size()-1;i>=0;i--){
        b.push_back(a[i]);
    }
}
void sum(){
    int i,t=0,m;
    for(i=0;i<a.size();i++){
        m=t+a[i]+b[i];
        c.push_back(m%10);
        t=m/10;
    }
    if(t!=0){
        c.push_back(t);
    }
}
bool is_palindrome(){
    int i,t;
    t=c.size();
    for(i=0;i<t/2;i++){
        if(c[i]!=c[t-i-1]){
            return false;
        }
    }
    return true;
}
void rem1(){
    while(a.size()!=0){
        a.pop_back();
    }
}
void rem2(){
    while(b.size()!=0){
        b.pop_back();
    }
}
void rem3(){
    while(c.size()!=0){
        c.pop_back();
    }
}
void build(){
    int i;
    for(i=0;i<c.size();i++){
        a.push_back(c[i]);
    }
}
void print(vector<int> x){
    int i;
    for(i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int n,j,cunt=0,m;
    for(n=1;n<10000;n++){
        build_array(n);
        m=0;
        for(j=1;m!=1;j++){
            rever_array();
            sum();
            if(is_palindrome()==true){
                cunt++;
                m=1;
            }
            if(j==49){
                m=1;
            }
            if(m!=1){
                rem1();
                build();
                rem2();
                rem3();
            }
        }
        rem1();
        rem2();
        rem3();
    }
    cout<<9999-cunt;
}
