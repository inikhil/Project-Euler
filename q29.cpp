#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    double a,b,t;
    int i,m=0;
    vector<double> seq;
    for(a=2;a<=100;a++){
        for(b=2;b<=100;b++){
            t=pow(a,b);
            m=0;
            for(i=0;i<seq.size();i++){
                if(t==seq[i])
                    m=1;
            }
            if(m==0)
                seq.push_back(t);
        }
    }
    cout<<seq.size();
    return 0;
}
