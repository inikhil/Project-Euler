#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
using namespace std;
int convert(string n){
    int j,k=0,t;
    if(int(n[0])==45){
        t=n.size()-1;
        for(j=t;j>=1;j--){
            k=k+(n[j]-48)*pow(10.0,t-j);
        }
        k=k*(-1);
    }
    else{
        t=n.size()-1;
        for(j=t;j>=0;j--){
            k=k+(n[j]-48)*pow(10.0,t-j);
        }
    }
    return k;
}
bool check(int *a,int *b,int* c){
    double s,t,m,n;
    m=(double)(c[1]-a[1])/(c[0]-a[0]);
    s=(double)(a[0]*m-a[1])/(b[1]-a[1]-m*(b[0]-a[0]));
    t=(double)(-a[0]-(b[0]-a[0])*s)/(c[0]-a[0]);
    if((s<=1)&&(s>=0)){
        if((t<=1)&&(t>=0)){
            if(s+t<=1){
                return true;
            }
        }
    }
    return false;
}
int main(){
    ifstream myfile;
    myfile.open("q102.txt");
    string s,num[6];
    int i,cunt=0,j,m=0,a[2],b[2],c[2];
    for(i=0;i<1000;i++){
        myfile>>s;
        for(j=0;j<s.size();j++){
            switch(s[j]){
                case ',' : s[j]=' ';
            }
        }
        m=0;
        stringstream ss(s);
        while(ss>>s){
            num[m]=s;
            m++;
        }
        for(j=0;j<2;j++){
            a[j]=convert(num[j]);
            b[j]=convert(num[j+2]);
            c[j]=convert(num[j+4]);
        }
        if(check(a,b,c)==true){
            cunt++;
        }
    }
    cout<<cunt;

}
