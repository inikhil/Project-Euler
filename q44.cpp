#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> pent)
{
    int i;
    for(i=0;i<pent.size();i++){
        cout<<pent[i]<<" ";
    }
}
bool is_pent(double m)
{
    int i;
    double t;
    for(i=1;t<=m;i++){
        t=i*(3*i-1)/2;
        if(t==m){
            return true;
        }
    }
    return false;
}
int main()
{
    int n,i,j,t;
    double m,p;
    vector<double> pent;
    for(n=1;n<5000;n++){
        pent.push_back(n*(3*n-1)/2);
    }
    t=pent.size();
    for(i=t/2;i>=0;i--){
        for(j=t/2;j<t;j++){
            m=pent[i]+pent[j];
            if(is_pent(m)==true){
                p=pent[i]-pent[j];
                if(is_pent(p)==true){
                    cout<<i<<" "<<j<<" ";
                }
            }
        }
    }
    return 0;
    //print(pent);
}
