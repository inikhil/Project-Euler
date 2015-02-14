#include<iostream>
#include<fstream>
using namespace std;
int c[5];
int a[5][5];
int k;
int sum(int i,int j){
    int m,t=10000000;
    for(m=0;m<5;m++){
        c[m]=a[m][i]+a[m][j];
    }
    for(m=0;m<5;m++){
        if(c[m]<t){
            t=c[m];
            k=m;
        }
    }
}
int downfix(int i){
    int m=k,x,y;
    for(m=k;m<3;m++){
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
    if(m==3){
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
    int i,j;
    ifstream myfile;
    myfile.open("q82a.txt");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            myfile>>a[i][j];
        }
    }
    for(i=1;i<5;i++){
        sum(i,i-1);
        a[k][i]=a[k][i-1]+a[k][i];
        if(k!=4){
            downfix(i);
        }
        if(k!=0){
            upfix(i);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

}
