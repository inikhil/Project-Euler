#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main(){
    ifstream myfile;
    myfile.open("q79.txt");
    vector<int> a;
    int n,t,i,m1,m2,m3,j,m;
    while(myfile>>n){
        a.push_back(n);
    }
    t=a.size();
    int b[10][10],cunt[10];
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            b[i][j]=0;
        }
    }
    for(i=0;i<10;i++){
        cunt[i]=0;
    }
/*************************************Concept of topological sort********************/
    for(i=0;i<t;i++){
        m1=a[i]%10;
        a[i]=a[i]/10;
        m2=a[i]%10;
        a[i]=a[i]/10;
        m3=a[i]%10;
        b[m3][m1]=1;
        b[m3][m2]=1;
        b[m2][m1]=1;
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(j=0;j<10;j++){
        for(i=0;i<10;i++){
            if(b[i][j]==1){
                cunt[j]++;
            }
        }
    }
    for(i=0;i<10;i++){
        cout<<cunt[i]<<" ";
    }
    cout<<"\n";
    cout<<7;
    for(j=0;j<7;j++){
        t=10;
        for(i=0;i<10;i++){
            if((cunt[i]>0)&&(cunt[i]<t)){
                t=cunt[i];
                m=i;
            }
        }
        cout<<m;
        cunt[m]=0;
    }
}
