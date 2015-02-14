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
int sum(int i,int j){
    //cout<<b[i][j]<<" ";
    cout<<i<<" "<<j<<endl;
    cunt=cunt+b[i][j];
    if((j==1)&&(i==0)){
        sum(i,j-1);
        return 0;
    }
    if((i==0)&&(j==0)){
        cout<<cunt<<endl;
        return 0;
    }
    else{
        if((j==1)&&(i!=0)){
            cout<<cunt;
            return 0;
            sum(i-1,j);
        }
        else{
            if(b[i-1][j]<b[i][j-1]){
                sum(i-1,j);
            }
            else{
                sum(i,j-1);
            }
        }
    }

}

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
     /*for(i=0;i<80;i++){
        for(j=0;j<80;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    sum(79,79);
    return 0;
}
