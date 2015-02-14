#include<iostream>
#include<fstream>
#include<cstring>
#include<vector>
#include<sstream>
using namespace std;
int value(string s)
{
    int i=0,cnt=0;
    for(i=0;i<s.size();i++)
        cnt+=s[i]-64;
    return cnt;
}
bool triangle(int n)
{
    int i;
    for(i=1;i*(i+1)/2<=n;i++){
        if(n==(i*(i+1)/2))
            return true;
    }
    return false;
}
int main()
{
    string s,m,t;
    int i,n,cnt=0;
    ifstream myfile;
    vector<string> words;
    myfile.open("q42.txt");
    myfile>>s;
    for(int i=0;i<s.size();i++){
        switch(s[i]){
        case'"':s[i]=' ';
        case',':s[i]=' ';
        }
    }
    stringstream ss(s);
    while(ss>>m){
        words.push_back(m);
    }
    for(i=0;i<words.size();i++){
        n=value(words[i]);
        if(triangle(n)==true)
            cnt++;
    }
    cout<<cnt;
    return 0;
}
