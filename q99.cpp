#include<iostream>
#include<cmath>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;
vector<int> convert(vector<string> wor){
    int j,i,t=0,m;
    vector<int> words;
    string s;
    for(j=0;j<wor.size();j++){
        s=wor[j];
        t=0;
        m=s.size()-1;
        for(i=m;i>=0;i--){
            t=t+(int(s[i])-48)*pow(10.0,m-i);
        }
        words.push_back(t);
    }
    return words;
}
int main(){
    int i,j,line;
    double t,m,u,v;
    ifstream myfile;
    vector<string> wor;
    vector<int> words;
    myfile.open("q99.txt");
    string s[1000];
    for(i=0;i<1000;i++){
        myfile>>s[i];
    }
    for(i=0;i<1000;i++){
        t=0;
       for(j=0;t!=1;j++){
            switch(s[i][j]){
                case',':
                    s[i][j]=' ';
                    t=1;
            }
       }
    }
    for(i=0;i<1000;i++){
        stringstream ss(s[i]);
        while(ss>>s[i]){
            wor.push_back(s[i]);
        }
    }
    words=convert(wor);
    t=words[0];
    m=words[1];
    line=1;
   // cout<<t<<" "<<m<<",";
    for(i=2;i<2000;i=(i+2)){
        u=(double)words[i+1]/m;
        v=pow(words[i],u);
        if(t<v){
            t=words[i];
            m=words[i+1];
            line=int(i/2)+1;
        }
    }
    cout<<line<<endl;
    return 0;
}
