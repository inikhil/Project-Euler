#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
using namespace std;
string pandg[5040];
vector<int> num;
int k=0;
bool is_prime(double n)
{
    int i;
    if(fmod(n,2)==0){
        return false;
    }
    for(i=3;i<=sqrt(n);i=(i+2)){
        if(fmod(n,i)==0){
            return false;
        }
    }
    return true;
}
void permute(char a[], int i, int n)
{
   int j;
   if (i == n){
        pandg[k]=a;
        k++;
   }
   else
   {
       for (j = i;j <= n;j++)
       {
          swap(a[i], a[j]);
          permute(a, i+1, n);
          swap(a[i], a[j]);
       }
   }
}
void convert(string* pandg)
{
    int valu,i,j;
    for(i=0;i<5040;i++){
        valu=0;
        for(j=0;j<7;j++){
            valu+=(pandg[i][j]-48)*pow(10.0,6-j);
        }
        num.push_back(valu);
    }
}
/*bool is_pandigital(int n)
{
    vector<int> padig;
    int d,j,i=1,t=9;
    int m=n;
    m=n;
    d=m%10;
    if(d==0)
        return false;
    m=m/10;
    padig.push_back(d);
    for(i=0;i<t-1;i++){
        d=m%10;
        if(d==0)
            return false;
        for(j=0;j<padig.size();j++){
            if(padig[j]==d){
                return false;
            }
        }
        m=m/10;
        padig.push_back(d);
    }
    padig.clear();
    return true;
}*/


int main()
{
    int i;
    char a[] = "7654321";
    permute(a, 0, 6);
    convert(pandg);
    for(i=0;i<5040;i++){
        if(is_prime(num[i])==true){
            cout<<num[i]<<" ";
            return 0;
        }
    }
}

