#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
bool is_prime(int n){
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int i,j=1,c=0,t;
    vector<int> a;
    double m,k;
    a.push_back(0);
    for(i=2;c!=1;i++){
        if(is_prime(i)==true){
            a.push_back(i);
            t=a.size();
            k=(double)i/100;
            m=2*(t-1)*k;
            if(m>100000000){
                cout<<t;
                c=1;
            }
        }
    }


}
