#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<cstdlib>
#include<vector>
#include<cmath>
using namespace std;
int a[80][80];
int c[80];
int k;
int sum(int i,int j){
    int m,t=10000000;
    for(m=0;m<80;m++){
        c[m]=a[m][i]+a[m][j];
    }
    for(m=0;m<80;m++){
        if(c[m]<t){
            t=c[m];
            k=m;
        }
    }
}
int downfix(int i){
    int m=k,x,y;
    for(m=k;m<78;m++){
        x=min(a[m][i],a[m+1][i-1]);
        x=min(x,a[m+2][i-1]);
        if(x==a[m][i]){
            a[m+1][i]+=x;
        }
        if(x==a[m+1][i-1]){
            a[m+1][i]+=x;
        }
        if(x==a[m+2][i-1]){
            y=a[m+2][i-1]+a[m+2][i];
            if(y<a[m][i]){
                a[m+2][i]=y;
                a[m+1][i]+=y;
                m++;
            }
            else{
                a[m+1][i]+=a[m][i];
            }
        }
    }
    if(m==78){
        if(a[m+1][i-1]<a[m][i]){
            a[m+1][i]+=a[m+1][i-1];
        }
        else{
            a[m+1][i]+=a[m][i];
        }
    }
}
int upfix(int i){
    int m=k,x,y;
    for(m=k;m>1;m--){
        x=min(a[m][i],a[m-1][i-1]);
        x=min(x,a[m-2][i-1]);
        if(x==a[m][i]){
            a[m-1][i]+=x;
        }
        if(x==a[m-1][i-1]){
            a[m-1][i]+=x;
        }
        if(x==a[m-2][i-1]){
            y=a[m-2][i-1]+a[m-2][i];
            if(y<a[m][i]){
                a[m-2][i]=y;
                a[m-1][i]+=y;
                m--;
            }
            else{
                a[m-1][i]+=a[m][i];
            }
        }
    }
    if(m==1){
        if(a[m-1][i-1]<a[m][i]){
            a[m-1][i]+=a[m-1][i-1];
        }
        else{
            a[m-1][i]+=a[m][i];
        }
    }

}
int main(){
    int i,j,k1,t,su=0,tt=1000000;
    string s[80];
    ifstream myfile;
    myfile.open("q81.txt");
    for(i=0;i<80;i++){
        //getline(myfile,s[i]);
        myfile>>s[i];
    }
    for(i=0;i<80;i++){
        for(j=0;j<s[i].size();j++){
            if(s[i][j]==','){
                s[i][j]=' ';
            }
        }
    }
    for(i=0;i<80;i++){
        for(j=0;j<80;j++){
            a[i][j]=0;
        }
    }
    vector<string> b[80];
    for(i=0;i<80;i++){
        stringstream dd(s[i]);
        while(dd>>s[i]){
            b[i].push_back(s[i]);

        }
    }
    for(i=0;i<80;i++){
        for(j=0;j<80;j++){
            t=b[i][j].size();
            for(k1=t-1;k1>=0;k1--){
                a[i][j]+=(int(b[i][j][k1])-48)*pow(10.0,t-k1-1);
            }
        }
    }
     for(i=1;i<80;i++){
        sum(i,i-1);
        a[k][i]=a[k][i-1]+a[k][i];
        if(k!=79){
            downfix(i);
        }
        if(k!=0){
            upfix(i);
        }
    }
    for(i=0;i<80;i++){
        for(j=0;j<80;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(j=0;j<79;j++){
        if(a[j][79]<tt){
            tt=a[j][79];
        }
    }
    cout<<tt;

}
