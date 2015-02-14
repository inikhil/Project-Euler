#include<iostream>
#include<vector>
using namespace std;
bool is_palindrome(int n)
{
    int t=0,m=n,d,i;
    vector<int> npal;
    while(m!=0){
        t++;
        d=m%10;
        npal.push_back(d);
        m=m/10;
    }
    for(i=0;i<t;i++){
      if(npal[i]!=npal[t-1-i]){
            return false;
      }
    }
    return true;
}
bool bin(int n)
{
    int m=n,i,d,t;
    vector<int> apal;
    while(m!=0){
        d=m%2;
        apal.push_back(d);
        m=m/2;
    }
    t=apal.size();
    for(i=0;i<t;i++){
        if(apal[i]!=apal[t-1-i]){
            return false;
      }
    }
    return true;
}
int main()
{
    int i,sum=0;
    for(i=1;i<1000000;i++){
        if(is_palindrome(i)==true){
            if(bin(i)==true)
                sum+=i;
        }
    }
    cout<<sum;
}
