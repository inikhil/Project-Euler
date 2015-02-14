#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<cstdlib>
#include<vector>
#include<cmath>
using namespace std;
int b[80][80];
int cunt=0;
int main(){
    int i,j,k,t,su=0;
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
            b[i][j]=0;
        }
    }
    vector<string> a[80];
    for(i=0;i<80;i++){
        stringstream dd(s[i]);
        while(dd>>s[i]){
            a[i].push_back(s[i]);

        }
    }
    for(i=0;i<80;i++){
        for(j=0;j<80;j++){
            t=a[i][j].size();
            for(k=t-1;k>=0;k--){
                b[i][j]+=(int(a[i][j][k])-48)*pow(10.0,t-k-1);
            }
        }
    }
    for(j=1;j<80;j++){
        b[0][j]=b[0][j-1]+b[0][j];
    }
    for(i=1;i<80;i++){
        b[i][0]=b[i-1][0]+b[i][0];
    }
    for(i=1;i<80;i++){
        for(j=1;j<80;j++){
            b[i][j]=min(b[i-1][j],b[i][j-1])+b[i][j];
        }
    }
    cout<<b[79][79];
    return 0;
}

