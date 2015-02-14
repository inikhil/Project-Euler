#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool is_palindrome(int i){
    vector<int> a;
    int t,j;
    while(i!=0){
        a.push_back(i%10);
        i=i/10;
    }
    t=a.size();
    for(j=0;j<=t/2;j++){
        if(a[j]!=a[t-j-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int b[10001];
    int i,j,k,sum,cunt=0;
    b[0]=0;
    for(i=1;i<10001;i++){
        b[i]=i;
    }
    for(k=1;k<10001;k++){
        for(j=k;j<10001;j++){
            sum=0;
            for(i=k;i<=j;i++){
                sum+=b[i]*b[i];
            }
            if(sum<100000000){
                if(is_palindrome(sum)==true){
                    cout<<sum<<" ";
                    cunt=cunt+sum;
                }
            }
        }
    }
    cout<<cunt;
}
